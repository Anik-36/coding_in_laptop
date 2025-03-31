package arraydemo;
public class ArrayInsertOutput {
    public static void main(String[] args) {
        int[][] a= new int[4][5];
        int k=0;
        for(int i=0; i<4; i++){
            for(int j=0; j<5; j++){
                a[i][j]=k;
                k++;
            }
        }
        for(int i=0; i<4; i++){
            for(int j=0; j<5; j++){
                System.out.print(" "+a[i][j]);
            }
            System.out.println();
        }
    }
}
