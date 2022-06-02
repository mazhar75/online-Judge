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
const int N =1e6+10;
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
int sum=0;
for(int i=0;i<n;i++){
cin>>a[i];
 sum+=a[i];}
 if(sum==0){
 cout<<"NO"<<endl;
 return;
 }
 cout<<"YES"<<endl;
 if(sum<0){
 sort(a.begin(),a.end());
 for(int i=0;i<n;i++){
 cout<<a[i]<<" ";
 }
 cout<<endl;
 return;
 }
 sort(a.begin(),a.end());
 reverse(a.begin(),a.end());
 for(int i=0;i<n;i++){
 cout<<a[i]<<" ";
 }
 cout<<endl;
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
