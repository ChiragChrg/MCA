import java.rmi.Naming;

public class Age_Server {
    public static void main(String[] args) {
        try {
            Age_Interface checkAge = (Age_Interface) new Age_Impl();
            Naming.rebind("ageCalc", checkAge);

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}