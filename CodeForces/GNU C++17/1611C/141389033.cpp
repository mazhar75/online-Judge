/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
#include <cstdlib>
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long int ll;
#define REP(i, a, b) for (long long int i=a; i>=b; i--)
#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};
//public:
void cp::think(){

    ll n;
    cin>>n;
    vector<ll>vec1(n),vec2(n),vec3(n);
    for(ll &x: vec1) cin>>x;
    if(vec1[0]!=n && vec1[n-1]!=n)
        cout<<-1<<endl;
    else
    {
        REP(i,n-1,0)
   cout<<vec1[i]<<" ";
    }


cout<<endl;
}
/**void cp::binary(ll n){
    string s;
    while(n){
        s=n%2;
        n=n/2;
    }
    cout<<s<<endl;
}*/
int main() {
    RUN_FAST;
    cp me;
  int t;
 cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
