#include<iostream>
#include<map>
#include<cstdio>
#include<vector>
#include<iterator>
#include<algorithm>
#include<set>
using namespace std;
void solve(){
   int n;
   cin>>n;
   vector<int>vec;
   set<int>a;
   for(int i=0;i<n-1;i++){
        int val;
        cin>>val;
        vec.push_back(val);

   }
    a.insert(n);
    a.insert(vec[n-2]);
   int temp;
   temp=vec[n-2];
   while(temp!=1){

   a.insert(vec[temp-2]);
   temp=vec[temp-2];

   }
   for(auto it=a.begin();it!=a.end();it++){
    cout<<*it<<" ";
   }

    }
int main(){
    /**int t;
    cin>>t;
    while(t--)*/
        solve();
    return 0;



}
