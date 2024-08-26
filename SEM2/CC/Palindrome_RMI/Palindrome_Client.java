import java.rmi.*;
import java.util.Scanner;

public class Palindrome_Client {
    public static void main(String[] args) {
        try {
            // Initialize scanner to accept user Input
            Scanner scan = new Scanner(System.in);

            System.out.println("\nEnter a String : ");
            String str = scan.nextLine();

            // Naming.lookup the same String defined in Naming.rebind() method in
            // <Server>.java
            Palindrome_Interface palindrome = (Palindrome_Interface) Naming.lookup("checkPalindrome");

            String Result = palindrome.isPalindrome(str); // Calling function in <Impl>.java
            System.out.println(Result);
            // Close Scanner
            scan.close();

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}