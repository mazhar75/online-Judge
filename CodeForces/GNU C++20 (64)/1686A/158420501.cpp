#include<bits/stdc++.h>
#define long long int ll
using namespace std;
void solve()
{
    int n;
    cin>>n;
    vector<int>a(n);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        sum+=a[i];
    }
    for(int i=0; i<n; i++)
    {
        int x=sum-a[i];
        if(x%(n-1)==0)
        {
            if(x/(n-1)==a[i])
            {
                cout<<"YES"<<endl;
                return;
            }
        }
    }
    cout<<"NO"<<endl;

}
int main()
{
    //freopen("00_input.txt","r+",stdin);
    int test;
    cin>>test;
    while(test--)solve();
    return 0;
}
