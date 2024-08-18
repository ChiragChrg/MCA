import java.rmi.*;
import java.util.Scanner;

public class Largest_Client {
    public static void main(String[] args) {
        try {
            Scanner scan = new Scanner(System.in);

            System.out.println("\n Enter Number 1 : ");
            int num1 = scan.nextInt();
            System.out.println("\n Enter Number 2 : ");
            int num2 = scan.nextInt();
            System.out.println("\n Enter Number 3 : ");
            int num3 = scan.nextInt();

            Largest_Interface largestNumber = (Largest_Interface) Naming.lookup("largestNum");
            int result = largestNumber.findLargest(num1, num2, num3);
            System.out.println("Largest number = " + result);
            scan.close();

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}