import java.rmi.*;
import java.util.Scanner;

public class Factorial_Client {
    public static void main(String[] args) {
        try {
            // Initialize scanner to accept user Input
            Scanner scan = new Scanner(System.in);

            System.out.println("\n Enter Number : ");
            int num = scan.nextInt();

            // Naming.lookup the same String defined in Naming.rebind() method in
            // <Server>.java
            Factorial_Interface factorialCalc = (Factorial_Interface) Naming.lookup("factorialNum");
            int result = factorialCalc.findFactorial(num); // Calling function in <Impl>.java

            System.out.println("Factorial of " + num + " = " + result);

            // Close Scanner
            scan.close();

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}