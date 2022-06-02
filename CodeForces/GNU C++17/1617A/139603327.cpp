#include<iostream>
#include<map>
#include<cstdio>
#include<vector>
#include<iterator>
#include<algorithm>
using namespace std;
void solve(){
    string s,r;
    cin>>s>>r;
    int l=s.length();
    vector<char>vec;
    vector<char>a;
    for(int i=0;i<l;i++){
        vec.push_back(s[i]);
    }
    sort(vec.begin(),vec.end());
    for(int i=0;i<l;i++){
       if(vec[0]==r[0] && vec[i]!=r[1] && vec[i]<='c'){
        a.push_back(vec[i]);
       }
       else if(vec[0]!=r[0]){
        a.push_back(vec[i]);
       }
    }
    for(int i=0;i<l;i++){
       if(vec[i]==r[1] || vec[i]>'c'){
        a.push_back(vec[i]);
       }}
    for(int i=0;i<l;i++){
       cout<<a[i];
       }
       cout<<endl;

    }
int main(){
    int t;
    cin>>t;
    while(t--)solve();
    return 0;



}
