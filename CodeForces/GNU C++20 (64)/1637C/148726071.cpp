#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void solve(){
int n;
cin>>n;
vector<int>a(n);
vector<int>x;
vector<int>y;
int cnt=0,flag=1;
for(int i=0;i<n;i++)cin>>a[i];
int odd=0,even=0,one=0;
for(int i=1;i<n-1;i++){
	if(a[i]%2==0){
		x.push_back(a[i]);
	even++;}
	    
           else {
			y.push_back(a[i]);   
		   odd++;
		   if(a[i]==1)one++;
		   }}
		   
if((odd==one and even==0) or (odd==1 and even==0 ))
	cout<<-1<<endl;
else{
	long long int  ans=0;
	for(int i=0;i<x.size();i++)
		ans+=x[i]/2;
	for(int i=0;i<y.size();i++)
		ans+=(y[i]+1)/2;
cout<<ans<<endl;}
	
	

}
int main(){
int t;
cin>>t;
while(t--){
solve();
}
return 0;}