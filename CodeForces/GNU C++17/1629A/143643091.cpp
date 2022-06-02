/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <iostream>
#include<vector>
#include <cstdlib>
#include<algorithm>
#include<cmath>
#include<queue>
#include<cstdio>
#include <cstdlib>
#include<set>
#include<map>
#include<sstream>
#include<string>
#include<utility>
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;

//#define REP(i, a, b) for (long long int i=a; i<b; i++)
//#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};
bool isSquare(int x){
  int y=sqrt(x);
  return y*y==x;
}



void cp::think(){
int n,k;
cin>>n>>k;
vector<int>a(n);
vector<int>b(n);
vector<pair<int,int>>c;
for(int i=0;i<n;i++) cin>>a[i];
for(int i=0;i<n;i++) cin>>b[i];
for(int i=0;i<n;i++){
c.push_back(make_pair(a[i],b[i]));
}
sort(c.begin(),c.end());
for(int i=0;i<n;i++){
 if(c[i].first<=k)
 k=k+c[i].second;
}
cout<<k<<endl;




}






int main() {
    //RUN_FAST;
    cp me;
  int t;
 cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
