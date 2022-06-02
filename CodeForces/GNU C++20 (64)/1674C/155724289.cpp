#include<bits/stdc++.h>
using namespace std;

void solve(){
    string s,t;
    cin>>s>>t;
    // auto it=find(t.begin(),t.end(),"a");
    int cnt=0;
    for(int i=0;i<t.length();i++){
        if(t[i]=='a')cnt++;
    }
   if(cnt && t.length()>1){
       cout<<-1<<'\n';
       return;
   }
   else if(cnt && t.length()==1){
       cout<<1<<"\n";
       return;
   }
   else{
       long long ans=1;
       for(int i=0;i<s.length();i++){
           ans*=2;
       }
       cout<<ans<<'\n';
       return;
   }

}


int main()
{
ios_base::sync_with_stdio(0);
cin.tie(0);
    int t;
    cin>>t;

    while(t--){
     solve();
    }
   
  
return 0;
}