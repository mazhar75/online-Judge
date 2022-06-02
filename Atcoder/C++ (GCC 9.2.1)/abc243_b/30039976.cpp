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

 void cp::think(){
int n;
cin>>n;
vector<int>a(n);
vector<int>b(n);
vector<int>c;
int cnt=0,k=0;
for(int i=0;i<n;i++){
  cin>>a[i];
}
for(int i=0;i<n;i++){
  cin>>b[i];
}
for(int i=0;i<n;i++){
  if(a[i]==b[i])
  cnt++;
  else
  c.push_back(b[i]);
}
sort(c.begin(),c.end());
for(int i=0;i<n;i++){
 auto it=find(c.begin(),c.end(),a[i]);
 if(it!=c.end())
 k++;
}
cout<<cnt<<endl<<k<<endl;

 }







int main() {


ios::sync_with_stdio(0);
cin.tie(0);

  cp me;
  int t,i=1;
  //cin>>t;
  while(i--){

    me.think();

  }
  return 0;
}
