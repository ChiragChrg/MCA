import java.rmi.*;
import java.util.Scanner;

public class Age_Client {
    public static void main(String[] args) {
        try {
            Scanner scan = new Scanner(System.in);

            System.out.println("\n Enter Birth Year : ");
            int year = scan.nextInt();
            System.out.println("\n Enter Birth Month : ");
            int month = scan.nextInt();
            System.out.println("\n Enter Birth Day : ");
            int day = scan.nextInt();

            Age_Interface AgeCalc = (Age_Interface) Naming.lookup("ageCalc");
            String result = AgeCalc.calculateAge(year, month, day);

            System.out.println(result);
            scan.close();
        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}