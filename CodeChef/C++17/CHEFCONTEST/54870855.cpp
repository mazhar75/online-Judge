/** Bismllah
Author:Md. Mazharul ISlam
SUST*/
#include<iostream>
#include<cstdio>
#include<cstdlib>
#define endl "\n"
using namespace std;
/**g long int ipow(int base, long long int exp)
{
    int result = 1;
    for (;;)
    {
        if (exp & 1)
        {result *= base;}
        exp >>= 1;
        if (!exp)
           {
              break;
           }
        base =base*base;
    }

    return result;
}*/
int main()
{
    int t;
    cin>>t;
    while(t--){
            int x,y,p,q;
            cin>>x>>y>>p>>q;
            int u,v;
            u=x+p*10;
            v=y+q*10;
            if(u>v)
                cout<<"Chefina"<<endl;
            else if(u<v)
                cout<<"Chef"<<endl;
            else
                cout<<"Draw"<<endl;


    }

    return 0;
}
