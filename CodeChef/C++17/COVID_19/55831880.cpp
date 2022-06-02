    #include <iostream>
    using namespace std;
    void solve(){
    	int n,m,ans=0;
    	cin>>n>>m;
    	for(int i=1;i<=n;i++){
    		for(int j=1;j<=m;j++){
    			if(i%2!=0 && j%2!=0)
    			 ans++;
    		}
    	}
    	cout<<ans<<endl;
    }
    int main(){	
     
    int t;
    cin>>t;
    while(t--){
    	solve();
    }
    	return 0;
    }