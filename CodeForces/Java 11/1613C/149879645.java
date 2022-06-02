// Stay positive
//Do hard work
//If You Want You can.
import java.util.Scanner;
import java.util.Arrays;
import java.lang.Math;

public class solve
{
    /**static int gcd(int a,int b)
    {
        if(b==0)return a;
    	return gcd(b,a%b);
    }
    */

    public static void main(String[] args)
    {

        Scanner sc=new Scanner(System.in);

        int t=sc.nextInt();
        while(t>0)
        {

            int n=sc.nextInt();
            long  k=sc.nextLong();
            long [] a=new long[n];
            for(int i=0; i<n; i++)
            {
                long x=sc.nextLong();
                a[i]=x;
            }
            long lo=1,hi=k,ans=0;
            while(lo<=hi)
            {
                long mid=(lo+hi)/2,damage=0;
                for(int i=0; i<n; i++)
                {
                    if(i==n-1)damage+=mid;
                    else
                        damage+=Math.min(a[i+1]-a[i],mid);
                }
                if(damage>=k)
                {
                    ans=mid;
                    hi=mid-1;
                }
                else lo=mid+1;
            }
            System.out.println(ans);


            t--;
        }
    }
}
