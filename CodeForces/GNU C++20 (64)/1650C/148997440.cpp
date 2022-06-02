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
ll n,m;
cin>>n>>m;
vector<pair<ll,ll>>a;
map<ll,int>mp;

ll x,y;
for(int i=0;i<m;i++){
cin>>x>>y;
a.push_back(make_pair(y,x));
mp.insert(pair(x,i+1));
}
sort(a.begin(),a.end());


cout<<endl;
ll sum=0;
for(int i=0;i<2*n;i++){
  //cout<<a[i].first<<" ";
  sum+=a[i].first;
  //it=find(c.begin(),c.end(),a[i].second);
}

int k=m-2*n;
//cout<<"k= "<<k<<endl;

vector<ll>b;
for(int i=0;i<2*n;i++){
b.push_back(a[i].second);
}
sort(b.begin(),b.end());
int i=0,j=2*n-1;
cout<<sum<<endl;
while(i<j){
cout<<mp[b[i]]<<" "<<mp[b[j]]<<endl;
i++;j--;
}




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
