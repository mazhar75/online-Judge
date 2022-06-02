/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
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
string s;
cin>>s;
char c='z';
int l=s.length(),k=0;
for(int i=0;i<l;i++){
  if(s[i]<c){
  c=s[i];
  k=i;
  }
}
cout<<c<<" ";
for(int i=0;i<l;i++){
  if(i!=k)
  cout<<s[i];
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
