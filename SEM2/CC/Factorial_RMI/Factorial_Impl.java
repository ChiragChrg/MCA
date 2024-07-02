import java.rmi.server.*;

public class Factorial_Impl extends UnicastRemoteObject implements Factorial_Interface {
    public Factorial_Impl() throws java.rmi.RemoteException {
        // Empty placeholder constructor
    }

    // Same function name defined in <Interface>.java
    // All Logic of the program
    public int findFactorial(int num) throws java.rmi.RemoteException {
        int res = 1;

        for (int i = 1; i <= num; i++) {
            res = res * i;
        }

        return res;
    }
}