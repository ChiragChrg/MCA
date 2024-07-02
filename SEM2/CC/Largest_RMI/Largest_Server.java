import java.rmi.Naming;

public class Largest_Server {

    public static void main(String[] args) {
        try {
            Largest_Interface largestNumber = (Largest_Interface) new Largest_Impl();

            // Give any Unique String for Rebind and the above created Variable
            // <Client>.java Naming.lookup() will search for the same string
            Naming.rebind("largestNum", largestNumber);

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}