import java.rmi.server.*;

public class Largest_Impl extends UnicastRemoteObject implements Largest_Interface {
    public Largest_Impl() throws java.rmi.RemoteException {
        // Empty placeholder constructor
    }

    // Same function name defined in <Interface>.java
    // All Logic of the program
    public int findLargest(int num1, int num2, int num3) throws java.rmi.RemoteException {
        if (num1 > num2) {
            if (num1 > num3) {
                return num1;
            } else {
                return num3;
            }
        } else {
            if (num2 > num3) {
                return num2;
            } else {
                return num3;
            }
        }
    }
}