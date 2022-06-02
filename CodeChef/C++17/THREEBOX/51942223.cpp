#include<iostream>
#include<cstdio>
using namespace std;
int main()
{int t,a,b,c,d;
cin>>t;
for(int i=0;i<t;i++)
{cin>>a>>b>>c>>d;
if(a+b+c<=d)
    cout<<1<<endl;
else if((a+b<=d)||(b+c<=d)||(c+a<=d))
{
    cout<<2<<endl;
}
else
    cout<<3<<endl;

}

return 0;

}
