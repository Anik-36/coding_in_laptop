package university.Java.labFinal.FileHandling;
import java.awt.desktop.SystemEventListener;
import java.net.*;
import java.io.*;
import java.util.Scanner;

public class Client {
    public static void main(String[] args) throws IOException {
        Socket socket = new Socket("127.0.0.1",5000);

    DataInputStream input = new DataInputStream(socket.getInputStream());
    DataOutputStream output = new DataOutputStream(socket.getOutputStream());
    BufferedReader reader = new BufferedReader(new InputStreamReader(System.in ));

    String msg = "";
    String val = "";

    while(!msg.equals("over")){
        System.out.println("client : ");
        msg = reader.readLine();
        output.writeUTF(msg);

        val = input.readUTF();
        System.out.println("server" + val);



    }
    socket.close();
    }
}
