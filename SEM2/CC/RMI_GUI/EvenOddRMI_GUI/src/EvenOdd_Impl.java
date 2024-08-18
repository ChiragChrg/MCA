import java.rmi.server.*;

public class EvenOdd_Impl extends UnicastRemoteObject implements EvenOdd_Interface {
    public EvenOdd_Impl() throws java.rmi.RemoteException {
        // Empty placeholder constructor
    }

    // Same function name defined in <Interface>.java
    // All Logic of the program
    public boolean isEven(int num) throws java.rmi.RemoteException {
        if (num % 2 == 0)
            return true;
        else
            return false;
    }
}