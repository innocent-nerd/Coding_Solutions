import java.util.*;
public class Main{
    public static void main(String[] args){
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        int arr[][]=new int[n][3];
        int c=0;
        for (int i=0;i<n;i++){
            int c1=0;
            for (int j=0;j<3;j++){
                arr[i][j]=sc.nextInt();
                if (arr[i][j]==1)
                c1=c1+1;
            }
            if (c1>=2)
            c=c+1;
        }
        System.out.println(c);
    }
}