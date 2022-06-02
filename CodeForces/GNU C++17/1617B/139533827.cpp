#include <iostream>
#include<algorithm>
using namespace std;

int main() {
	long int t;
	cin>>t;
	while(t--){
		long long int n;
		cin>>n;
		if(n%2==0){
			cout<<n/2<<" "<<n/2-1<<" "<<1<<endl;
		}
		else{
			long long int a=0,b=0,flag=1,temp,j=2;
			temp=n-3;
			while(flag==1){
				if(__gcd(temp,j)==1){
					a=temp;
					b=j;
					flag=-1;
					break;
				}
				else{
					--temp;
					++j;
					flag=1;
				}
			}
			cout<<a<<" "<<b<<" "<<1<<endl;
			
		}
	}
	return 0;
}