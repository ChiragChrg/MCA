import java.rmi.server.*;

public class SquareArea_Impl extends UnicastRemoteObject implements SquareArea_Interface {
    public SquareArea_Impl() throws java.rmi.RemoteException {
        // Empty placeholder constructor
    }

    // Same function name defined in <Interface>.java
    // All Logic of the program
    public int findSquare(int num) throws java.rmi.RemoteException {
        return (num * num);
    }

    public int findArea(int length, int breadth) throws java.rmi.RemoteException {
        return (length * breadth);
    }
}