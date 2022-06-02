/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
#include<stack>
#define endl "\n"
using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;
const int N =1e9;
const int MAXN = 100010;

class cp{
public:
void think();
};

bool isPowerOfTwo(ll n){
    return ((n)&(n-1)); // if 0 than yes else false
}
ll PowerOfTwo(int n){
 return 1<<n;

}


 void cp::think(){
int a,b,c;
cin>>a>>b>>c;
			 int k=max(a,b);
			 int d=min(a,b);
             int l=k-d,x,y;
             if(l%d==0)x=l/d;
             else x=l/d+1;
             //y=d+x;
             //2 7 3
            if(a==b or abs(a-b)<=c){
				 cout<<"YES"<<"\n";
				 return;
			 }
			 if(x<=c){
			 cout<<"YES"<<endl;
			 return;
			 }
			 cout<<"NO"<<endl;



 }







int main() {


ios::sync_with_stdio(0);
cin.tie(0);

  cp me;
  int t,i=1;
  cin>>t;
  while(t--){

    me.think();

  }
  return 0;
}
