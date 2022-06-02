
// Stay positive
//Do hard work
//If You Want You can.
import java.util.Scanner;
import java.util.Arrays;

public class solve
{
	
public static void main(String[] args)
    {
	
	Scanner sc=new Scanner(System.in);
	
     int t=sc.nextInt();
	 while(t>0)
	        {
	           
			    int n=sc.nextInt();
				int k=2*n;
				 int [] x=new int [k];
				 
				 for(int i=0,y;i<2*n;i++)
				 {
					 y=sc.nextInt();
					 x[i]=y;
				 }
				 Arrays.sort(x);
				 int i=0,j=2*n-1;
				 while(i<j){
					 System.out.print(x[i]+" "+x[j]+" ");
					 i++;j--;
				 }
				 System.out.println(" ");
				 
		        t--;
		    }
	}
}