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
ll a,b,c,d;
cin>>a>>b>>c>>d;
if(a>=b)
   {  b+=c;
     if(a>=b)
        b+=d;
     else
        a+=d;

   }
else if(b>a){
    a+=c;
    if(a>=b)
        b+=d;
    else
        a+=d;}

if(a>=b)
    cout<<"N"<<endl;
else
    cout<<"S"<<endl;
}

int main(){
    long int t;
    cin>>t;
    while(t--){
        solve();}
    return 0;



}
