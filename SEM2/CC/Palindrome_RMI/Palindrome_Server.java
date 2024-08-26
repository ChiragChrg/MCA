import java.rmi.Naming;

public class Palindrome_Server {

    public static void main(String[] args) {
        try {
            Palindrome_Interface palindrome = (Palindrome_Interface) new Palindrome_Impl();

            // Give any Unique String for Rebind and the above created Variable
            // <Client>.java Naming.lookup() will search for the same string
            Naming.rebind("checkPalindrome", palindrome);

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}