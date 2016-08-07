package qt_compiler;

import java.io.*;
import java.util.ArrayList;
import javax.xml.parsers.*;
import javax.xml.transform.Result;
import javax.xml.transform.Source;
import javax.xml.transform.Transformer;
import javax.xml.transform.TransformerConfigurationException;
import javax.xml.transform.TransformerException;
import javax.xml.transform.TransformerFactory;
import javax.xml.transform.dom.DOMSource;
import javax.xml.transform.stream.StreamResult;
import org.w3c.dom.*;
import org.xml.sax.SAXException;

/**
 *
 * @author bsteiner
 */
public class Qt_compiler
{

    static String SolutionDir;
    static String ProjectDir;
    static String ProjectFile;
    static String MocDir;
    static String PreCompHeader;
    
    /*
     args: { $(SolutionDir), $(ProjectDir), $(ProjectFile) }
     */
    public static void main(String[] args) throws ParserConfigurationException, SAXException, IOException, TransformerConfigurationException, TransformerException, InterruptedException
    {

	if (args.length != 5)
	{
	    System.out.println("USAGE: qt_compiler [SOLUTION_DIR] [PROJECT_DIR] [PROJECT_FILE_NAME] [MOC_DIR] [PRECOMPILED_HEADER]");
	    System.exit(-1);
	}

	try
	{
	    System.out.print("qt_compiler: Invocing moc on *.q.hpp");

	    SolutionDir = args[0];
	    ProjectDir = args[1];
	    ProjectFile = args[2];
	    MocDir = args[3];
	    PreCompHeader = args[4];

	    DocumentBuilderFactory factory = DocumentBuilderFactory.newInstance();
	    DocumentBuilder builder = factory.newDocumentBuilder();

	    File projectFile = new File(ProjectDir + ProjectFile);
	    Document document = builder.parse(projectFile);

	    
	    ArrayList<String> cppFiles = new ArrayList<>();
	    ArrayList<Element> includeNodes = new ArrayList<>();
	    Element cl_compile_node = null;

	    //Search for correct nodes
	    NodeList nodes = document.getElementsByTagName("ItemGroup");
	    for (int i = 0; i < nodes.getLength(); i++)
	    {
		if (((Element) nodes.item(i)).getElementsByTagName("ClCompile").getLength() > 0)
		{
		    Element clCompileNode = (Element) nodes.item(i);
		    
		    for (int j = 0; j < clCompileNode.getChildNodes().getLength(); j++)
		    {
			if (clCompileNode.getChildNodes().item(j).getNodeType() == Node.ELEMENT_NODE)
			{
			    Element cppNode = (Element) clCompileNode.getChildNodes().item(j);
			    cppFiles.add(cppNode.getAttribute("Include"));
			}
		    }
		    
		    cl_compile_node = clCompileNode;
		}
		if (((Element) nodes.item(i)).getElementsByTagName("ClInclude").getLength() > 0)
		    includeNodes.add((Element) nodes.item(i));
	    }

	    boolean addedSth = false;
	    
	    for (Element elem : includeNodes)
		addedSth |= check_header_files(elem, cppFiles, document, cl_compile_node);

	    //Check headerfiles
	    

	    if (addedSth)
	    {
		Transformer transformer = TransformerFactory.newInstance().newTransformer();
		Result output = new StreamResult(projectFile);
		Source input = new DOMSource(document);

		transformer.transform(input, output);

		System.out.println(" .... new files found, please recompile!");
		System.exit(-2);
	    }
	    else
	    {
		System.out.println("   ....   done!");
	    }
	}
	catch (Exception e)
	{
	    System.out.println("\nUnknown exception caught: " + e.getMessage());
	    e.printStackTrace();
	    System.exit(-1);
	}
    }
    
    static boolean check_header_files(Element clIncludeNode, ArrayList<String> cppFiles, Document document, Element cl_compile_node) throws IOException, InterruptedException
    {
	boolean added_something = false;
	
	for (int i = 0; i < clIncludeNode.getChildNodes().getLength(); i++)
	{
	    if (clIncludeNode.getChildNodes().item(i).getNodeType() == Node.ELEMENT_NODE)
	    {
		Element hppNode = (Element) clIncludeNode.getChildNodes().item(i);
		String hppPath = hppNode.getAttribute("Include");

		if (hppPath.endsWith(".q.hpp"))
		{
		    //Check if file is newer then compiled one
		    File relSource = new File(hppPath);
		    File relTarget = new File("generated\\" + hppPath.replace(".q.hpp", ".generated.cpp"));
		    File source = new File(ProjectDir + hppPath);
		    File target = new File(ProjectDir + relTarget.getPath());

		    if (!target.exists() || source.lastModified() > target.lastModified())
		    {
			target.getParentFile().mkdirs();

			String invDir = "";
			for (String split : hppPath.split("\\\\"))
			{
			    invDir += "..\\";
			}

			//Invoke MOC
			String command = MocDir + "\\moc.exe"
				+ " -o " + target.getCanonicalPath()
				+ " -f " + PreCompHeader
				+ " -f " + hppPath
				+ " " + source.getCanonicalPath();
			Process mocResult = Runtime.getRuntime().exec(command);

			mocResult.waitFor();
			if (mocResult.exitValue() != 0)
			{
			    BufferedReader stdInput = new BufferedReader(new InputStreamReader(mocResult.getInputStream()));

			    BufferedReader stdError = new BufferedReader(new InputStreamReader(mocResult.getErrorStream()));

			    String s = null;
			    while ((s = stdInput.readLine()) != null)
			    {
				System.out.println(s);
			    }
			    while ((s = stdError.readLine()) != null)
			    {
				System.out.println(s);
			    }

			    System.exit(-1);
			}
		    }

		    //Add to project
		    if (!cppFiles.contains(relTarget.getPath()))
		    {
			Element node = document.createElement("ClCompile");
			node.setAttribute("Include", relTarget.getPath());
			cl_compile_node.appendChild(node);
			added_something = true;
		    }
		}
	    }
	}
	
	return added_something;
    }
}
