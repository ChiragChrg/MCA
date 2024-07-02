import java.rmi.*;
import java.util.Scanner;

public class EvenOdd_Client {
    public static void main(String[] args) {
        try {
            // Initialize scanner to accept user Input
            Scanner scan = new Scanner(System.in);

            System.out.println("\n Enter the Number : ");
            int num = scan.nextInt();

            // Naming.lookup the same String defined in Naming.rebind() method in
            // <Server>.java
            EvenOdd_Interface evenOddChecker = (EvenOdd_Interface) Naming.lookup("evenOdd");
            boolean result = evenOddChecker.isEven(num); // Calling function in <Impl>.java, returns Boolean

            if (result) // same as (result == true) since boolean
                System.out.println(num + " is an Even number!");
            else
                System.out.println(num + " is an Odd number!");

            // Close Scanner
            scan.close();

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}