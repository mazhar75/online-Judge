#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    for(int i=1;i<=n;i++){
        if(n%i==0){
            reverse(s.begin(),s.begin()+i);
        }

    }
    cout<<s<<endl;



}
int main()
{
    //freopen("cp.txt","r+",stdin);
    int test=1;
    //cin>>test;
    while(test--)
    {
        solve();
    }
    return 0;
}
