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

    ll n,q;
    cin>>n;
    int l=0;
    q=n;
    while(q){
        q=q/10;
        l++;
    }
    if(l==1)
    cout<<n<<endl;
    else{
            int sum=0;
  for(int i=1;i<=l-1;i++){
    sum+=9;
  }
  string s;
  for(int i=0;i<l;i++){
    s.push_back('1');
  }
  ll p;
  istringstream(s) >> p;
cout<<sum+n/p<<endl;}
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
