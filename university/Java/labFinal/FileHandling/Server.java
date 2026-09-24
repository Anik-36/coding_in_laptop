package university.Java.labFinal.FileHandling;
import java.awt.desktop.SystemEventListener;
import java.net.*;
import java.io.*;
import java.util.Scanner;

public class Server {
    public static void main(String[] args) throws IOException{
        ServerSocket ss = new ServerSocket(5000);
        System.out.println("waiting for client");
        Socket socket = ss.accept();

        DataInputStream input = new DataInputStream(socket.getInputStream());
        DataOutputStream output = new DataOutputStream(socket.getOutputStream());
        BufferedReader reader = new BufferedReader(new InputStreamReader(System.in));

        String msg = "";
        String val = "";

        while(!msg.equals("over")){
            msg = input.readUTF();
            System.out.println("client " + msg);
            System.out.println("server reply :");
            val = reader.readLine();
            output.writeUTF(val);
        }

        socket.close();
        ss.close();

    }
}
