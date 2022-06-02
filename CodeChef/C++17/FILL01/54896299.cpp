
/** Bismllah
Author:Md. Mazharul ISlam
SUST*/
#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<vector>
#define endl "\n"
using namespace std;

int main()
{
    int t;
    //vector<long int>vec;
    cin>>t;
    while(t--){
           long int n,k;
           cin>>n>>k;
           string s;
           cin>>s;
           int l=s.length(),sum=0,r=0;
           for(int i=0;i<l;i++)
           {
               if(s[i]=='0')
                    ++r;
                 if(s[i]=='1' || (i==l-1 && s[i]=='0' )){
                        if(r>=k)
                    sum+=r/k;
                        r=0;}
           }
           cout<<sum<<endl;



    }

    return 0;
}
