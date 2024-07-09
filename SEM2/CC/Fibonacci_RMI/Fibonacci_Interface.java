public interface Fibonacci_Interface extends java.rmi.Remote {
    // Initialize function name defined in the <Impl>.java file
    public String generateFibonacci(int range) throws java.rmi.RemoteException;
}