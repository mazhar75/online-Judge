

import java.util.Scanner;

public class solution{
	
 public static void main(String[] args){

 Scanner sc=new Scanner(System.in);
 long t=sc.nextLong();
 int n;
 while(t>0){
 n=sc.nextInt();
 long [] a=new long [n];
 for(int i=0;i<n;i++){
 	long x;
 	x=sc.nextLong();
 	a[i]=x;
 }
 long m=0;
 for(int i=0;i<n-1;i++){

 	m=Math.max(m,a[i]*a[i+1]);
 }
 System.out.println(m);

 t--;

 }
 }

}