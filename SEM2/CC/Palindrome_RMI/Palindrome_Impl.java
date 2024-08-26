import java.rmi.server.*;

public class Palindrome_Impl extends UnicastRemoteObject implements Palindrome_Interface {
    public Palindrome_Impl() throws java.rmi.RemoteException {
        // Empty placeholder constructor
    }

    // Same function name defined in <Interface>.java
    // All Logic of the program
    public String isPalindrome(String str) throws java.rmi.RemoteException {
        String reverse_str = "";

        for (int i = 0; i < str.length(); i++) {
            // Add new letters infront of previous letters
            reverse_str = str.charAt(i) + reverse_str;
        }

        // Check if Original string is equal to Reversed String
        if (str.equals(reverse_str))
            return str + " is a Palindrome : " + reverse_str;
        else
            return  str + " is Not a Palindrome : " + reverse_str;
    }
}