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



void cp::think(int t){
string s="";
int n,sum;
cin>>n;
sum=n;
if(n==1 or n==2){
cout<<n<<endl;
return;
}

if((n+1)%3==0 or n%3==0)
{
   while(sum>0){
  cout<<2;
  sum-=2;
  if(sum>0){
  cout<<1;
  sum-=1;}


  }
  cout<<endl;

}
else{

 while(sum>0){
  cout<<1;
  sum-=1;
  if(sum>0){
  cout<<2;
  sum-=2;}


  }
  cout<<endl;


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
