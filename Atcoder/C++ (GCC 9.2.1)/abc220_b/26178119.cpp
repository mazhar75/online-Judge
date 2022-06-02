#include<iostream>
#include<cstdio>

#include<vector>
using namespace std;
long long int  fun(long long int p,long long int s)
{  long long result=1;
    if(s==0)
{
    return 1;
}
else if(s==1)
{
    return p;
}
  else{ for(s;s>0;s--)
   {
       result=result*p;
   }
   return result;}
}
int main()
{

    long long int p;
    cin>>p;
    long long int a,b;
    cin>>a>>b;
    vector<long long int>x;
    vector<long long int>y;
   long long int i=0;
   while(a!=0)
    {
        x.push_back(a%10);
        a=a/10;
       ++i;
    }
    long long int j=0;
    while(b!=0)
    {
         y.push_back(b%10);
        b=b/10;
        ++j;
    }
    long long int num1=0,num2=0;
    for(long long int k=0;k<i;k++)
    {
        num1+=x[k]*fun(p,k);
    }
    for(long long int k=0;k<j;k++)
    {
        num2+=y[k]*fun(p,k);
    }
    cout<<num1*num2<<endl;
    return 0;
}
