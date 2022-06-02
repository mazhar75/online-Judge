#include<iostream>
#include<vector>
using namespace std;
int main()
{int n,p,k=0;
vector<int>a;
cin>>n>>p;
for(int i=0;i<n;i++)
{
    int x;
    cin>>x;
    a.push_back(x);
}
for(int i=0;i<n;i++)
{
    if(a[i]<p)
        ++k;
}
cout<<k<<endl;



return 0;
}
