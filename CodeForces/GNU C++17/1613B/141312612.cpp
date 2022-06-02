/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
#include <cstdlib>

using namespace std;
typedef long long int ll;

#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
};
//public:
void cp::think(){
ll n;
cin>>n;
vector<int> a(n);
    for (int &x : a) cin >> x;
    int mn=*min_element(a.begin(),a.end());
    ll k=0,i=0;
    while(k<n/2){
        if(a[i]!=mn)
            {cout<<a[i]<<" "<<mn<<endl;
              k++;}
              ++i;
    }
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
