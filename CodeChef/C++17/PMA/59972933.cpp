
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
void think(int);
};



void cp::think(int t){
int n;
cin>>n;
vector<ll>a;
vector<ll>b;
ll x;
for(int i=1;i<=n;i++){
 cin>>x;
 x=abs(x);
 if(i%2==0)
 a.push_back(x);
 else
 b.push_back(x);

}
sort(a.begin(),a.end());
ll k=a.back();
ll y=*min_element(b.begin(),b.end());
ll sum=0;
for(int i=0;i<b.size();i++){
sum+=b[i];
}
ll ans=0;
for(int i=0;i<a.size();i++){
ans+=a[i];
}
ll m=sum-ans;
ans=ans-k+y;
sum=sum-y+k;
sum-=ans;
cout<<max(m,sum)<<endl;



}


int main() {

  cp me;
  int t,i=1;
  cin>>t;
  while(i<=t){

    me.think(i);
    i++;
  }
  return 0;
}
