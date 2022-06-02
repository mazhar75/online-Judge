
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
			 int k=sc.nextInt();
			 int [] a=new int[n];
			 for(int i=0,x;i<n;i++)
			 {
				 x=sc.nextInt();
				 a[i]=x;
			 }
             for(int i=0;i<n-1;i++)
			 {   if(k==0)
				 break;
               
                 while(a[i]!=0 && k>0){
                 --a[i];
                  ++a[n-1];
				  --k;
				 }				  
			 }	 
			  for(int i=0;i<n;i++)
              {
                 System.out.print(a[i]+" ");
              }
            System.out.println(" ");			  
		        t--;
		    }
	}
}