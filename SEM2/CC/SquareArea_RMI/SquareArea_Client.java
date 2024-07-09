import java.rmi.*;
import java.util.Scanner;

public class SquareArea_Client {
    public static void main(String[] args) {
        try {
            // Initialize scanner to accept user Input
            Scanner scan = new Scanner(System.in);

            System.out.println("\n Enter Number to Square : ");
            int num = scan.nextInt();

            // Naming.lookup the same String defined in Naming.rebind() method in
            // <Server>.java
            SquareArea_Interface SquareArea = (SquareArea_Interface) Naming.lookup("SquareArea");

            int ResultSquare = SquareArea.findSquare(num); // Calling function in <Impl>.java
            System.out.println("Square of " + num + " = " + ResultSquare);

            // Calling 2nd Function to find Area
            System.out.println("\n Enter the Length: ");
            int length = scan.nextInt();
            System.out.println("\n Enter the Breadth : ");
            int breadth = scan.nextInt();

            int ResultArea = SquareArea.findArea(length, breadth); // Calling function in <Impl>.java
            System.out.println("Area  = " + ResultArea);

            // Close Scanner
            scan.close();

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}