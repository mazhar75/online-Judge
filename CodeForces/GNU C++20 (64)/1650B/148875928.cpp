/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;
const int N =1e6+10;
const int MAXN = 100010;
class cp{
public:
void think();
};



void cp::think(){
ll l,r,x;
cin>>l>>r>>x;

 if(r<x){
 cout<<(r%x)<<endl;
 return;
 }
 if(l==r){
 ll d=r/x+r%x;
 cout<<d<<endl;
 return;
 }
 if(x==1){
 cout<<r<<endl;
 return;
 }
 if(r%x==0 and x!=1){
    ll d=r/x-1+x-1;
    cout<<d<<endl;
    return;

 }
ll k=r/x;

ll m=r%x;
if(m==(x-1)){
cout<<(k+m)<<endl;
return;
}
ll ans=(k-1)*x+x-1;
if(ans>=l){
cout<<(k+x-2)<<endl;
return;}
cout<<(k+m)<<endl;


}


int main() {

  cp me;
  int t;
  cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
