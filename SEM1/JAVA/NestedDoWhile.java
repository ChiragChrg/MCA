public class NestedDoWhile {
    public static void main(String[] args) {
        int rows = 5;
        int cols = 5;

        int i=0;
        do{
            int j=0;
            do{
                System.out.print("("+i+","+j+")");
                j++;
            }while(j<cols);
            System.out.println();
            i++;
        }while(i<rows);
    }
}
