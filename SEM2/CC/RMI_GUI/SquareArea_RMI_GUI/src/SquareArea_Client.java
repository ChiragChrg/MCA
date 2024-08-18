import java.rmi.*;
import java.util.Scanner;

public class SquareArea_Client {
    public static void main(String[] args) {
        try {
            Scanner scan = new Scanner(System.in);

            System.out.println("\n Enter Number to Square : ");
            int num = scan.nextInt();
            SquareArea_Interface SquareArea = (SquareArea_Interface) Naming.lookup("SquareArea");

            int ResultSquare = SquareArea.findSquare(num);
            System.out.println("Square of " + num + " = " + ResultSquare);

            System.out.println("\n Enter the Length: ");
            int length = scan.nextInt();
            System.out.println("\n Enter the Breadth : ");
            int breadth = scan.nextInt();

            int ResultArea = SquareArea.findArea(length, breadth);
            System.out.println("Area  = " + ResultArea);

            scan.close();

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}