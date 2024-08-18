import java.rmi.*;
import java.util.Scanner;

public class Fibonacci_Client {
    public static void main(String[] args) {
        try {
            Scanner scan = new Scanner(System.in);

            System.out.println("\n Enter the Range : ");
            int range = scan.nextInt();

            Fibonacci_Interface factorialCalc = (Fibonacci_Interface) Naming.lookup("fibNum");
            String result = factorialCalc.generateFibonacci(range);
            System.out.println("Fibonacci series of " + range + " = " + result);
            scan.close();

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}