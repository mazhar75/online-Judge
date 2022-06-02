#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
int n;
cin>>n;
vector<long long int>a(n);
long long int sum=0;
for(int i=0;i<n;i++){
cin>>a[i];
sum+=a[i];
}
long long int m=*max_element(a.begin(),a.end());
if(m==0)
	cout<<0<<endl;
else if(2*m<=sum)
	cout<<1<<endl;
else
	cout<<(2*m-sum)<<endl;


	

}
int main(){
int t;
cin>>t;
while(t--){
solve();
}
return 0;}