import java.rmi.server.*;

public class Fibonacci_Impl extends UnicastRemoteObject implements Fibonacci_Interface {
    public Fibonacci_Impl() throws java.rmi.RemoteException {
    }

    public String generateFibonacci(int range) throws java.rmi.RemoteException {
        String res = "0 1";
        int num1 = 0;
        int num2 = 1;
        int temp = 0;

        for (int i = 2; i <= range; i++) {
            temp = num1 + num2;
            num1 = num2;
            num2 = temp;

            res = res + " " + temp;
        }

        return res;
    }
}