
// Stay positive
//Do hard work
//If You Want You can.
import java.util.Scanner;
import java.util.Arrays;

public class solve
{
	static int gcd(int a,int b)
	{  
	    if(b==0)return a;
		return gcd(b,a%b);
	}	
	
public static void main(String[] args)
    {
	
	Scanner sc=new Scanner(System.in);
	
     int t=sc.nextInt();
	 while(t>0)
	        {
	           
			    int k;
				k=sc.nextInt();
				int d=gcd(Math.max(k,100-k),Math.min(k,100-k));
			    int sum=k/d+(100-k)/d;
				System.out.println(sum);
				 
		        t--;
		    }
	}
}