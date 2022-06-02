#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int a,b,c;
cin>>a>>b>>c;
int n=b/c;

for(int i=0;i<=(n+1);++i)
{if(((c*i)>=a)&&((c*i)<=b))
{cout<<c*i<<endl;
break;}
else if((i==(n+1))&&(c*i>b))
    cout<<-1<<endl;
}
return 0;
}
