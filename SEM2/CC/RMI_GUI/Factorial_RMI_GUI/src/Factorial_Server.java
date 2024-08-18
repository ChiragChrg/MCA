import java.rmi.Naming;

public class Factorial_Server {

    public static void main(String[] args) {
        try {
            Factorial_Interface factorialNumber = (Factorial_Interface) new Factorial_Impl();
            Naming.rebind("factorialNum", factorialNumber);

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}