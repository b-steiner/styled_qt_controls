package qt_resource_compiler;

import java.io.BufferedReader;
import java.io.File;
import java.io.IOException;
import java.io.InputStreamReader;
import javax.xml.parsers.DocumentBuilder;
import javax.xml.parsers.DocumentBuilderFactory;
import javax.xml.parsers.ParserConfigurationException;
import javax.xml.xpath.*;
import org.w3c.dom.*;
import org.xml.sax.SAXException;

/**
 *
 * @author bdl
 */
public class Qt_resource_compiler {

     static String resource_path;
     static String output_path;
     static String bin_dir_path;
    
    public static void main(String[] args) {
        
        if (args.length != 3)
        {
            System.out.print("USAGE: qt_resource_compiler [QT_BIN_DIR] [RESOURCE_FILE] [OUTPUT_FILE]");
        }
        
        try
        {
            System.out.print("qt_resource_compiler: Checking resources");
            
            bin_dir_path = args[0];
            resource_path = args[1];
            output_path = args[2];
            
            //Read resource file, check modification date of all files
            File output_file = new File(output_path);
            boolean need_compile = check_resource_file(output_file.lastModified());
            
            if (need_compile)
            {
                compile_resources();                
                System.out.println("... updated resource file!");
            }
            else
                System.out.println("... nothing to do!");
        }
        catch (Exception e)
        {
	    System.out.println("\nUnknown exception caught: " + e.getMessage());
	    e.printStackTrace();
	    System.exit(-1);
        }        
    }    
    
    static void compile_resources() throws IOException, InterruptedException
    {
        String command = bin_dir_path + "\\rcc.exe"
                    + " -o " + output_path
                    + " " + resource_path;
                
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
    
    static boolean check_resource_file(long ref_date) throws SAXException, ParserConfigurationException, IOException, XPathExpressionException
    {
        //Check if output exists
        File output_file = new File(output_path);
        if (!output_file.exists())
            return true;
        
        //Check date of resource file itself
        File res_file = new File(resource_path);
        if (res_file.lastModified() > ref_date)
            return true;
        
        //Check all files mentioned in the qrc
        DocumentBuilderFactory dbf = DocumentBuilderFactory.newInstance();
        DocumentBuilder db = dbf.newDocumentBuilder(); 
        Document doc = db.parse(res_file);
        
        XPath xPath = XPathFactory.newInstance().newXPath();
        NodeList nodes = (NodeList)xPath.evaluate("/RCC/qresource/file", doc.getDocumentElement(), XPathConstants.NODESET);
        
        for (int i = 0; i < nodes.getLength(); ++i)
        {
            Node item = nodes.item(i);
            File f = new File(res_file.toPath().getParent().toString() + "\\" + item.getFirstChild().getTextContent());
            
            long fdate = f.lastModified();
            if (fdate > ref_date)
                return true;
        }
        
        return false;
    }
}
