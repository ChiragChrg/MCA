import java.rmi.server.*;

public class Reverse_Impl extends UnicastRemoteObject implements Reverse_Interface {
    public Reverse_Impl() throws java.rmi.RemoteException { }
 
    public String reverse(String str) throws java.rmi.RemoteException {
        String reverse_str = "";

        for (int i = 0; i < str.length(); i++) {
            reverse_str = str.charAt(i) + reverse_str;
        }

        return reverse_str;
    }
}