
/** Author:Md.Mazharul Islam
CSE,SUST*/
#include <bits/stdc++.h>

#define endl  "\n"
using namespace std;

void solve(){
long long int n,k,ans=0,flag=1;
cin>>n>>k;
vector<long long int>vec;
for(long long int i=0;i<n;i++){
    long long int val;
    cin>>val;
    vec.push_back(val);
}
sort(vec.begin(),vec.end());
for(long long int j=0;j<n;j++){
    if((vec[j]-vec[0])%k!=0){
        flag=-1;
        break;
    }
}
if(flag==1){
    for(long long int i=0;i<n;i++){
        ans+=(vec[i]-vec[0])/k;
    }
}
else
    ans=-1;

    cout<<ans<<endl;
}


int main()
{
    solve();
    return 0;
}
