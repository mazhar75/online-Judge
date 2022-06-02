#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    if((a<=b and b<=c)or(a>=b and b>=c))
    {
        cout<<"Yes"<<endl;
        return;
    }
    cout<<"No"<<endl;
}
int main()
{
    //freopen("00_input.txt","r+",stdin);
    int test=1;
    ///cin>>test;
    while(test--)solve();
    return 0;
}
