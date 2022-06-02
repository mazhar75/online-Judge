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
#define RUN_FAST ios::sync_with_stdio(false);
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
int n,k=0;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++) cin>>a[i];
vector<int>zero;
vector<int>one;
map<int ,int>ans;
string s;
cin>>s;
for(int i=0;i<n;i++){
if(s[i]=='0')
{zero.push_back(a[i]);
k++;}
else
one.push_back(a[i]);

}
sort(zero.begin(),zero.end());
int m=k;
for(int i=k-1;i>=0;i--){
ans.insert({zero[i],m});
m--;

}
sort(one.begin(),one.end());
m=k+1;
for(int i=0;i<n-k;i++){

ans.insert({one[i],m});
m++;

}
for(int i=0;i<n;i++){
auto it=ans.find(a[i]);
cout<<it->second<<" ";

}
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
