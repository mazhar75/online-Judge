/** Bismillah
Author:Md.Mazharul Islam
SUST*/
#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int a,b,l;
    a=s.find("er");
    b=s.find("ist");
    l=s.length();
    if(a==l-2)
    {
        cout<<"er"<<endl;
    }
    else if(b==l-3)
    {
        cout<<"ist"<<endl;
    }
    return 0;
}
