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
string s;
char c;
cin>>s;
cin>>c;
int l=s.length();
for(int i=0;i<l;i++){
   if(s[i]==c){
     if(i%2==0 and (l-i-1)%2==0){
     cout<<"YES"<<endl;
     return;
     }
   }
}
cout<<"NO"<<endl;

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
