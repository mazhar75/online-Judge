/** Author:Md.Mazharul Islam
CSE,SUST*/
#include<iostream>
#include<string>
#include<map>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
void solve(){
    long long int a,b,sum=0,flag=1;
    cin>>a>>b;
    while(flag!=-1){
        if(a>b)
        {   if(b!=0){
            sum+=a/b;
            a=a%b;}
            else
                flag=-1;
        }
        else if(a<b){
            if(a!=0){
            sum+=b/a;
            b=b%a;}
            else
                flag=-1;
        }
        else if(a==b){
            sum=1;
            break;
        }
    }
    cout<<sum<<endl;
}
int main(){
int n;
cin>>n;
while(n--)solve();
return 0;
}
