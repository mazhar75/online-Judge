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
stack<int>st;
cout<<2<<endl;
if(n==2){
cout<<1<<" "<<2<<endl;
return;
}
int a=n-2,b=n,c;
for(int i=1;i<=n;i++){
  if(i!=a and i!=b){
  st.push(i);
  }
}
st.push(b);
st.push(a);
while(!st.empty()){
  a=st.top();
  st.pop();
  b=st.top();
  st.pop();
  cout<<a<<" "<<b<<endl;
  if(!st.empty()){
  c=round((a+b)/2);
  st.push(c);}

}

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
