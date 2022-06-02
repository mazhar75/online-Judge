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
ll k=1;
for(int i=1;i<=n;i++){
   k=k*2;
}
cout<<(k-1)<<endl;




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
