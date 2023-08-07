import java.util.*;
public class PowerOfNumber{
    public static int reverse(int r){
        int rev=0;
        while(r!=0){
            int rem=r%10;
            rev=rev*10+rem;
            r=r/10;
        }
        return rev;
    }
    public static long power(int N,int R){
        if(R==1){
            return ((long)N);     
        }
        int mid=R/2;
        long temp=power(N,mid);
        if(R%2==0){;
            return temp%1000000007*temp%1000000007;
        }
        return temp%1000000007*temp%1000000007*N%1000000007;
    }
    public static void main(String[] args) {
        Scanner sc=new Scanner(System.in);
        int n=sc.nextInt();
        System.out.println(power(n,reverse(n)));
    }
}