public interface SquareArea_Interface extends java.rmi.Remote {
    // Initialize function name defined in the <Impl>.java file
    public int findSquare(int num1) throws java.rmi.RemoteException;

    public int findArea(int length, int breadth) throws java.rmi.RemoteException;
}