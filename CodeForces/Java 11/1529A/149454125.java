

import java.util.Scanner;


public class solve{
	
public static void main(String[] args){
	
	Scanner sc=new Scanner(System.in);
     int t=sc.nextInt();
	 while(t>0){
		 int n;
		 n=sc.nextInt();
		 int [] a=new int[n];
		 int ans=101,cnt=0;
		 for(int i=0,x;i<n;i++){
			 x=sc.nextInt();
			 ans=Math.min(ans,x);
			 a[i]=x;
		 }
		 for(int i=0,x;i<n;i++){
			if(a[i]!=ans)
				cnt++;
		 }
		 t--;
		 System.out.println(cnt);
	 }


    
	


}



}