#include <bits/stdc++.h>

using namespace std;

void solve(){
    int n,sum=0,flag=0;
    cin>>n;
map<int,int>m;


for(int i=0;i<n;i++){
      int val;
    cin>>val;
   m[val]++;
}
for(auto it=m.begin();it!=m.end();it++){
        int val=it->first;
        int x=-val;
     auto itr=m.find(x);
    if(it->first!=0 && itr==m.end()){

        if(it->second==1 || it->second==2)
            sum+=it->second;
        else
            sum+=2;
    }
    else if(itr!=m.end() && it->first!=0)
        sum+=1;
    else
        flag++;
}
if(flag>0)
cout<<sum+1<<endl;
else
    cout<<sum<<endl;
}

int main() {
  int t;
  cin>>t;
  while(t--){
    solve();
  }
  return 0;
}
