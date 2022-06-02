#include<iostream>
#include<sstream>
#include<map>
#include<cstdio>
#include<vector>
#include<iterator>
#include<algorithm>
#include<set>
using namespace std;
void solve(){
   long long int n;
   vector<long long int>vec;
   cin>>n;
   for(long long int i=0;i<n;i++){
    long long int val;
    cin>>val;
    vec.push_back(val);
   }
   sort(vec.begin(),vec.end());
   cout<<(vec[n-1]-vec[0])*vec[n-2]<<endl;

    }
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();}
    return 0;



}
