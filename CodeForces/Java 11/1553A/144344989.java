

import java.util.Scanner;

public class solution{
	
 public static void main(String[] args){

 Scanner sc=new Scanner(System.in);
 int t=sc.nextInt();
 int n;
 while(t>0){
 n=sc.nextInt();
 int ans;
 if(n<9)
 System.out.println(0);
else {

	ans=n/10;
	if(n%10==9)
		ans+=1;



	System.out.println(ans);
}
 t--;

 }
 }

}