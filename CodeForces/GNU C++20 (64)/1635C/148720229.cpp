#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void solve(){
int n;
cin>>n;
vector<int>a(n);
int cnt=0,flag=1;
for(int i=0;i<n;i++)cin>>a[i];
for(int i=n-1;i>=0;i--){
	 if(a[i]<0)
		 cnt++;
else break;}
for(int i=0;i<n;i++){
	if(a[i]<=a[i+1])
		continue;
	else {
		flag=-1;
break;}}
if(flag==1){
	cout<<0<<endl;
return;}
if((a[n-1]<a[n-2]) or (cnt>1)){
	cout<<-1<<endl;
return;}

cout<<(n-2)<<endl;
for(int i=1;i<=n-2;i++){

	cout<<i<<" "<<(n-1)<<" "<<n<<endl;
   
		
}

	

}
int main(){
int t;
cin>>t;
while(t--){
solve();
}
return 0;}