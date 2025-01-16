import java.lang.reflect.Array;
import java.util.ArrayList;
import java.util.Scanner;

public class test {
    public static void main(String[] args){
        Scanner in=new Scanner( System.in );
        int n=in.nextInt();
        int answer=n;
        for(int i=1;n!=0;i++){
             answer+=(i*(n-1));
             n--;
        }
        System.out.println(answer);
    }
}