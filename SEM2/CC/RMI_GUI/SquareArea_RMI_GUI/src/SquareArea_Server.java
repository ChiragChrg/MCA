import java.rmi.Naming;

public class SquareArea_Server {

    public static void main(String[] args) {
        try {
            SquareArea_Interface SquareArea = (SquareArea_Interface) new SquareArea_Impl();
            Naming.rebind("SquareArea", SquareArea);

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}