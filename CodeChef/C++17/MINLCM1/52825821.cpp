
/**Bismillah
Author:Md.Mazharul Islam
SUST*/
#include<iostream>
#include<cstdio>
using namespace std;

int main(){
long int t;
cin>>t;
for(long int i=0;i<t;i++)
{ long long int x,k,minimum,maximum;
cin>>x>>k;
minimum=x*2;
maximum=(x*k)*(x*k-1);

cout<<minimum<<" "<<maximum<<endl;


}
return 0;
}
