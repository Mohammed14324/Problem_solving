import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Scanner;

public class test {
    public static void main(String[] args){
        Scanner in=new Scanner( System.in );
        int n=in.nextInt();
        
        in.nextLine();
        for(int i=0;i<n;i++){
            int num=in.nextInt();
            in.nextLine();
            System.out.println(num);
        }
    }
}