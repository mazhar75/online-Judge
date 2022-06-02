#include<iostream>
#include<cstdio>
using namespace std;
int main()
{int t,a,b;
cin>>t;
for(int i=0;i<t;i++)
{cin>>a>>b;
if((a>0)&&(b>0))
{cout<<"Solution"<<endl;}
else if((a>0)&&(b==0))
cout<<"Solid"<<endl;
else
cout<<"Liquid"<<endl;
}
return 0;

}
