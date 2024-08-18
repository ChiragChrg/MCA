import java.rmi.*;
import java.util.Scanner;

public class Reverse_Client {
    public static void main(String[] args) {
        try { 
            Scanner scan = new Scanner(System.in);

            System.out.println("\n Enter the String : ");
            String str = scan.nextLine();
 
            Reverse_Interface StringReverse = (Reverse_Interface) Naming.lookup("reverseStr");
            String result = StringReverse.reverse(str); 
            System.out.println("Reverse of " + str + " = " + result);
            scan.close();

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}