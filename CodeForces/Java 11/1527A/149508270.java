
// Stay positive
//Do hard work
//If You Want You can.
import java.util.Scanner;

public class solve
{
	
public static void main(String[] args)
    {
	
	Scanner sc=new Scanner(System.in);
	
     int t=sc.nextInt();
	 while(t>0)
	        {
	           
			    int n=sc.nextInt();
				 if((n&(n-1))==0)
				 {
					 System.out.println((n-1));
					 
				 }
				 else
				 {
                int i=1;
                 while(i<=n){
                 
				  //System.out.print(i+" ");
				   i=i*2;
                 }
				 int k =i>>1;
				 //System.out.print(k+" ");
                System.out.println(k-1);	
			     }
		        t--;
		    }
	}
}