#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void solve(){
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)cin>>a[i];
if(a[0]!=a[1] and a[1]==a[2]){
	cout<<1<<endl;
return;}
for(int i=0;i<n-1;i++){
	if(a[i]!=a[i+1]){
		cout<<i+2<<endl;
return;}}


}
int main(){
int t;
cin>>t;
while(t--){
solve();
}
return 0;}
