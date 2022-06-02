#include <bits/stdc++.h>

using namespace std;
typedef long long int ll;

#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
};
//public:
void cp::think(){
 int n,m,rb,cb,rd,cd,a,b;
 cin>>n>>m>>rb>>cb>>rd>>cd;
 if(rd<rb)
 a=n-rb+n-rd;
 else
    a=rd-rb;

 if(cb>cd)
    b=m-cb+m-cd;
 else
    b=cd-cb;
    //cout<<a<<" "<<b<<endl;
 cout<<min(a,b)<<endl;

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
