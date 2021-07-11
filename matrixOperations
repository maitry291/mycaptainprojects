package Practise;

public class myCaptain{
    public static void main(String[] args) {

        int[][] a={{1,2,3},{4,5,6},{7,8,9}};
        int[][] b={{10,11,12},{13,14,15},{16,17,18}};
        int[][] m = new int[3][3];

        //sum of matrices
        System.out.println("Sum of matrices is:");
        for(int i=0;i<a.length;i++){
            for(int j=0;j<a.length;j++){
                System.out.print(a[i][j]+b[i][j]+" ");
            }
            System.out.println();
        }

        //multiplication of matrices
        System.out.println("Multiplication of matrices is:");
        for(int i=0;i<a.length;i++){
            for(int j=0;j<a.length;j++) {
               for(int k=0;k<a.length;k++){
                   m[i][j]+=a[i][j]*b[k][i];
               }
                System.out.print(m[i][j]+" ");
            }
            System.out.println();
        }
        
    }
}
