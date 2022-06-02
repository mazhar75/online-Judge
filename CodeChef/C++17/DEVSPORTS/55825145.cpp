    #include <iostream>
    using namespace std;
    void solve(){
    	long int z,y,a,b,c;
    	cin>>z>>y>>a>>b>>c;
    	if((z-y)>=(a+b+c))
    	cout<<"YES"<<endl;
    	else
    	cout<<"NO"<<endl;}
    int main(){	
     
    int t;
    cin>>t;
    while(t--){
    	solve();
    }
    	return 0;
    }