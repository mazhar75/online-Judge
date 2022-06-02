#include<iostream>
using namespace std;
int main()
{int n,a[4];
cin>>n;
for(int i=3;i>=0;i--)
{a[i]=n%10;
n=n/10;

}
for(int i=0;i<4;i++)
{cout<<a[i];
}

return 0;
}
