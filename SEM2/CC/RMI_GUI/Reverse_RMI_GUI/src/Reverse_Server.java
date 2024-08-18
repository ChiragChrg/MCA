import java.rmi.Naming;

public class Reverse_Server {
    public static void main(String[] args) {
        try {
            Reverse_Interface reverseString = (Reverse_Interface) new Reverse_Impl(); 
            Naming.rebind("reverseStr", reverseString);

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}