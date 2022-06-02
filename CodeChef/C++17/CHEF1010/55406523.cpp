#include<iostream>
#include<sstream>
#include<map>
#include<cstdio>
#include<vector>
#include<iterator>
#include<algorithm>
#include<set>
using namespace std;
void solve(){
int n,one=0,zero=0,ans;
cin>>n;
string s;
cin>>s;
for(int i=0;i<n;i++){
    if(s[i]=='1')
        one++;
    else if(s[i]=='0')
        zero++;
}
if(one>=2 && zero>=2)
{
    ans=min(one,zero);
    cout<<ans-1<<endl;
}
else
    cout<<0<<endl;

    }
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();}
    return 0;



}
