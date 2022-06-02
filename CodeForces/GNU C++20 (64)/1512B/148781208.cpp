#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
void solve(){
int n;
cin>>n;
vector<vector<char>>x(n);
vector<pair<int ,int>>dis;
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		char c;
		cin>>c;
		x[i].push_back(c);
		if(c=='*')
			dis.push_back(make_pair(i,j));
}}
int a,b,c,d;
a=dis[0].first;
b=dis[0].second;
c=dis[1].first;
d=dis[1].second;
 if(a==c)
 {
	 if(a+1<n)
	 {     
         x[a+1][b]='*';
	     x[c+1][d]='*';
	 }	 
		 else
		 {
			  x[a-1][b]='*';
	          x[c-1][d]='*';
	     
		 }
 }
else if(b==d){
	if(b+1<n)
	 {     
         x[a][b+1]='*';
	     x[c][d+1]='*';
	 }	 
		 else
		 {
			  x[a][b-1]='*';
	          x[c][d-1]='*';
	     
		 }
	
}
if(a==c or b==d){
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<x[i][j];
}
cout<<endl;
}	
return;
}

	  x[c][b]='*';
	  x[a][d]='*';
  
for(int i=0;i<n;i++){
	for(int j=0;j<n;j++){
		cout<<x[i][j];
}
cout<<endl;
}	 
 
}
int main(){
int t;
cin>>t;
while(t--){
solve();
}
return 0;}
