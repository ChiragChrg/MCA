import java.rmi.*;
import java.util.Scanner;

public class Largest_Client {
    public static void main(String[] args) {
        try {
            // Initialize scanner to accept user Input
            Scanner scan = new Scanner(System.in);

            System.out.println("\n Enter Number 1 : ");
            int num1 = scan.nextInt();
            System.out.println("\n Enter Number 2 : ");
            int num2 = scan.nextInt();
            System.out.println("\n Enter Number 3 : ");
            int num3 = scan.nextInt();

            // Naming.lookup the same String defined in Naming.rebind() method in
            // <Server>.java
            Largest_Interface largestNumber = (Largest_Interface) Naming.lookup("largestNum");
            int result = largestNumber.findLargest(num1, num2, num3); // Calling function in <Impl>.java

            System.out.println("Largest number = " + result);

            // Close Scanner
            scan.close();

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}