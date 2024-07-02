import java.rmi.Naming;

public class Factorial_Server {

    public static void main(String[] args) {
        try {
            Factorial_Interface factorialNumber = (Factorial_Interface) new Factorial_Impl();

            // Give any Unique String for Rebind and the above created Variable
            // <Client>.java Naming.lookup() will search for the same string
            Naming.rebind("factorialNum", factorialNumber);

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}