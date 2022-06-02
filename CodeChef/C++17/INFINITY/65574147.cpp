#include<bits/stdc++.h>
#define ll long long int
using namespace std;
void solve()
{
   int n;
   cin>>n;
   if(n==1){
   cout<<0<<endl;
   return;
   }
   if(n<=4){
   cout<<1<<endl;
   return;
   }
   int pos=1;
   int k=n-pos;
   int ans=k%5;
   int res=k/5;
   res=res*2;
   if(ans==4 or ans==5){
     res+=2;
   }
   else if(ans>0){
     res++;
   }
   cout<<res<<endl;







}
int main()
{
    //freopen("00_input.txt","r+",stdin);
    int test;
    cin>>test;
    while(test--)solve();
    return 0;
}
