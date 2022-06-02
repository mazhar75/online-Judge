#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
};
//public:
void cp::think(){
ll w,h;
cin>>w>>h;
vector<ll>wide1;
vector<ll>wide2;
vector<ll>height1;
vector<ll>height2;
ll k;
cin>>k;
for(ll i=0;i<k;i++){
    ll val;
    cin>>val;
    wide1.push_back(val);
}
cin>>k;
for(ll i=0;i<k;i++){
    ll val;
    cin>>val;
    wide2.push_back(val);
}
cin>>k;
for(ll i=0;i<k;i++){
    ll val;
    cin>>val;
    height1.push_back(val);
}
cin>>k;
for(ll i=0;i<k;i++){
    ll val;
    cin>>val;
    height2.push_back(val);
}
ll a,b,c,d;
a=wide1.back()-wide1.front();
b=wide2.back()-wide2.front();
c=height1.back()-height1.front();
d=height2.back()-height2.front();
//cout<<a<<" "<<b<<" "<<c<<" "<<d<<endl;
ll m=max(a*h,max(b*h,max(c*w,d*w)));
cout<<m<<endl;

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
