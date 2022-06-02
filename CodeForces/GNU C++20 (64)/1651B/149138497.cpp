/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;
const int N =1e9;
const int MAXN = 100010;
class cp{
public:
void think(int);
};

int ok(int a,int b){
return (abs(a-b)*2-(a+b));
}

void cp::think(int t){
int n;
cin>>n;
vector<ll>a;
ll k=1;

a.push_back(1);
for(int i=1;i<n;i++){
   int lst=a.back();
   int lo=lst+1,hi=N,val=-1;
   while(lo<=hi){
   int md=lo+(hi-lo)/2;
   if(ok(md,lst)>=0){
   val=md;
   hi=md-1;

   }
   else lo=md+1;
   }
   if(val==-1){
   cout<<"NO"<<endl;
   return;
   }
   a.push_back(val);



   }
cout<<"YES"<<endl;
for(int i=0;i<n;i++){
cout<<a[i]<<" ";
}
cout<<endl;



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
