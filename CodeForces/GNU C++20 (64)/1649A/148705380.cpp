#include<iostream>
#include<vector>
using namespace std;
void solve(){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
cin>>a[i];}
int ans=0;
 vector<vector<int>>x(2);
 for(int i=0;i<n;i++){
	 if(a[i]==1)
     x[1].push_back(i);
     else
 x[0].push_back(i);}
if(x[0].empty()) 
{cout<<0<<endl;
return;}
for(int i=0;i<x[0].size()-1;i++){
	if(x[0][i+1]-x[0][i]>1){
		cout<<(x[0][x[0].size()-1]+2-x[0][0])<<endl;
return;}}
cout<<(x[0].size()+1)<<endl;
	

}
int main(){
int t;
cin>>t;
while(t--){
solve();
}
return 0;}