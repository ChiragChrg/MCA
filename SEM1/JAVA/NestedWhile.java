public class NestedWhile {
    public static void main(String[] args) {
        int rows = 5;
        int cols = 5;

        int i=0;
        while(i<rows){
            int j=0;
            while(j<cols){
                System.out.print("("+i+","+j+")");
                j++;
            }
            System.out.println();
            i++;
        }
    }    
}
