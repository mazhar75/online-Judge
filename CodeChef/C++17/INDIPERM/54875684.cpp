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
           long int n;
           cin>>n;
           for(long int i=1;i<=n;i++)
           {
               if(i==n)
                cout<<1;
               else
                cout<<i+1<<" ";
           }
           cout<<endl;


    }

    return 0;
}
