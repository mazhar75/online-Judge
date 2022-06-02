/**Bismillah
Author:Md.Mazharul Islam
SUST*/
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++)
{
    int x,y,a=0;
    cin>>x>>y;
    while(x<y)
    {
        x=x+2;
        ++a;

    }
    while(x>y)
    {
        x=x-1;
        ++a;
    }
    if(x==y)
        cout<<a<<endl;
    else if(x==y+1)
    {
        cout<<a+1<<endl;
    }

}
return 0;
}
