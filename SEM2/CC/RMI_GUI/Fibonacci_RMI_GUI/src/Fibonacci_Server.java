import java.rmi.Naming;

public class Fibonacci_Server {

    public static void main(String[] args) {
        try {
            Fibonacci_Interface fibonacciNumber = (Fibonacci_Interface) new Fibonacci_Impl();
            Naming.rebind("fibNum", fibonacciNumber);

        } catch (Exception e) {
            System.out.println("Error : " + e);
        }
    }
}