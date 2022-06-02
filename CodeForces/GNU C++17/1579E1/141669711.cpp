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
#define REP(i, a, b) for (long long int i=a; i<b; i++)
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
deque<ll>vec;
 ll x;
cin>>x;
vec.PB(x);
for(ll i=1;i<n;i++){

    cin>>x;
    if(x>vec.front())
        vec.PB(x);
    else
           vec.push_front(x);
}
for( auto it=vec.begin();it!=vec.end();it++)
    cout<<*it<<" ";
cout<<endl;


 }
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
