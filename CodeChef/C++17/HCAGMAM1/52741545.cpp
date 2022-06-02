/** Bismillah
Author:Md.Mazharul Islam
SUST*/
#include<iostream>
#include<iostream>
using namespace std;
int main()
{   //freopen("pass_fail.txt","r+",stdin);
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
     int x,y,a=0,b=0,sub=0,sellary;
     string s;
     cin>>x>>y;
     cin>>s;
     int l=s.length();
     for(int i=0;i<l;i++)
     {if(s[i]=='1')
         {++a;
          ++b;}


      else if(s[i]=='0')
       {

           b=0;
       }
       if(sub<=b)
           {
               sub=b;


           }}

       sellary=a*x+y*sub;
       cout<<sellary<<endl;

    }
    return 0;
}
