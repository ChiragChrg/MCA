import java.rmi.*;
import java.util.Scanner;

public class Factorial_Client {
    public static void main(String[] args) {
        try {
            Scanner scan = new Scanner(System.in);
            System.out.println("\n Enter Number : ");
            int num = scan.nextInt();

            Factorial_Interface factorialCalc = (Factorial_Interface) Naming.lookup("factorialNum");
            int result = factorialCalc.findFactorial(num);

            System.out.println("Factorial of " + num + " = " + result);
            scan.close();
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}