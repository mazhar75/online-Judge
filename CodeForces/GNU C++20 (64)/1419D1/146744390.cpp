/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <iostream>
#include<vector>
#include <cstdlib>
#include<cmath>
#include<algorithm>
#include<stack>
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
const int N =1e2+10;
const int MAXN = 100010;



//#define REP(i, a, b) for (long long int i=a; i<b; i++)
//#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();


};
void cp::think(){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++) cin>>a[i];
sort(a.begin(),a.end());
vector<int>b;
int i=0,j=n-1;
while(j>=i){
if(i==j)
b.push_back(a[i]);
else{
b.push_back(a[j]);
b.push_back(a[i]);
}
j--;
i++;

}
int ans=0;
for(int i=1;i<n-1;i++){
if(b[i]<b[i+1] and b[i]<b[i-1])
ans++;

}
cout<<ans<<endl;
for(auto it=b.begin();it!=b.end();it++){
cout<<*it<<" ";
}
cout<<endl;




}






int main() {
    //RUN_FAST;
    cp me;
  int t=1;
  //cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
