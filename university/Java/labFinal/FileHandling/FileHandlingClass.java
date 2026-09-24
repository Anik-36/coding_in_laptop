package university.Java.labFinal.FileHandling;


import java.io.File;
import java.io.FileWriter;
import java.io.IOException;
import java.util.Scanner;
public class FileHandlingClass {
    public static void main(String[] args) throws IOException{

        File myFile = new File("javaFile.txt");
        myFile.createNewFile();

        FileWriter myWriter = new FileWriter("javaFile.txt");
        myWriter.write("Student ID : 1036");
        myWriter.close();

        Scanner myReader = new Scanner(myFile);
        String data = myReader.nextLine();
        System.out.println(data);
    }
}
