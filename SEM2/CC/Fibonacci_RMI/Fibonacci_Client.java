import java.rmi.*;
import java.util.Scanner;

public class Fibonacci_Client {
    public static void main(String[] args) {
        try {
            // Initialize scanner to accept user Input
            Scanner scan = new Scanner(System.in);

            System.out.println("\n Enter the Range : ");
            int range = scan.nextInt();

            // Naming.lookup the same String defined in Naming.rebind() method in
            // <Server>.java
            Fibonacci_Interface factorialCalc = (Fibonacci_Interface) Naming.lookup("fibNum");
            String result = factorialCalc.generateFibonacci(range); // Calling function in <Impl>.java

            System.out.println("Fibonacci series of " + range + " = " + result);

            // Close Scanner
            scan.close();

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}