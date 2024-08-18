import java.rmi.Naming;

public class EvenOdd_Server {

    public static void main(String[] args) {
        try {
            EvenOdd_Interface checkEvenOdd = (EvenOdd_Interface) new EvenOdd_Impl();

            // Give any Unique String for Rebind and the above created Variable
            // <Client>.java Naming.lookup() will search for the same string
            Naming.rebind("evenOdd", checkEvenOdd);

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}