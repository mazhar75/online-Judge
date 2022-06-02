import java.util.Scanner;

public class problem2 {
    public static void main(String[] args) {
        Scanner sc= new Scanner(System.in);
        int t= sc.nextInt();
        for(int i=0;i<t;i++)
        {
            long a,b,c,sum=0;
            a= sc.nextLong();
            b=sc.nextLong();
            c=sc.nextLong();
            sum=1*a+2*b+3*c;
            if(sum%2==0)
            {
                System.out.println(0);
            }
            else
                System.out.println(1);
        }
    }
}
