#include<iostream>
#include<sstream>
#include<map>
#include<cstdio>
#include<vector>
#include<iterator>
#include<algorithm>
#include<set>
using namespace std;
typedef long long int ll;

#define RUN_FAST ios::sync_with_stdio(false);

void solve(){
ll a,b,c,flag;
cin>>a>>b>>c;
vector<ll>vec{a,b,c};
//ll m=max(a,max(b,c));
sort(vec.begin(),vec.end());
if((a==b && c%2==0)||(b==c && a%2==0)||(c==a && b%2==0))
    {cout<<"YES"<<endl;
    }
else if(vec[2]-vec[1]==vec[0])
{
    cout<<"YES"<<endl;
}


else
    cout<<"NO"<<endl;
}

int main(){
    long int t;
    cin>>t;
    while(t--){
        solve();}
    return 0;



}
