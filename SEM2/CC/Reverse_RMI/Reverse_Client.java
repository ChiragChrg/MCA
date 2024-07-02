import java.rmi.*;
import java.util.Scanner;

public class Reverse_Client {
    public static void main(String[] args) {
        try {
            // Initialize scanner to accept user Input
            Scanner scan = new Scanner(System.in);

            System.out.println("\n Enter the String : ");
            String str = scan.nextLine();

            // Naming.lookup the same String defined in Naming.rebind() method in
            // <Server>.java
            Reverse_Interface StringReverse = (Reverse_Interface) Naming.lookup("reverseStr");
            String result = StringReverse.reverse(str); // Calling function in <Impl>.java, returns Boolean

            System.out.println("Reverse of " + str + " = " + result);

            // Close Scanner
            scan.close();

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}