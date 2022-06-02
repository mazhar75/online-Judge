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
vector<int>vec;
if(n==1)
    cout<<1<<endl;
 else if(n==2)
        cout<<-1<<endl;
 else{
    for(int i=1;i<=n*n;i++)
    {
        if(i%2==0)
            vec.push_back(i);
    }
    for(int i=1;i<=n*n;i++)
    {
        if(i%2!=0)
            vec.push_back(i);
    }
    for(int i=0;i<n*n;i++){
        cout<<vec[i]<<" ";
        if((i+1 !=1 )&&((n*n)%(i+1)==0 || (n*n)%(i+1)==n))
            cout<<endl;
    }

 }

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
