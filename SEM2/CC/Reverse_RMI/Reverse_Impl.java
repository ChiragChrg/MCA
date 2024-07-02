import java.rmi.server.*;

public class Reverse_Impl extends UnicastRemoteObject implements Reverse_Interface {
    public Reverse_Impl() throws java.rmi.RemoteException {
        // Empty placeholder constructor
    }

    // Same function name defined in <Interface>.java
    // All Logic of the program
    public String reverse(String str) throws java.rmi.RemoteException {
        String reverse_str = "";

        for (int i = 0; i < str.length(); i++) {
            // Add new letters infront of previous letters
            reverse_str = str.charAt(i) + reverse_str;
        }

        return reverse_str;
    }
}