import java.rmi.Naming;

public class Largest_Server {

    public static void main(String[] args) {
        try {
            Largest_Interface largestNumber = (Largest_Interface) new Largest_Impl();
            Naming.rebind("largestNum", largestNumber);

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}