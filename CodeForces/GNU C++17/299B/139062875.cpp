/** Author:Md.Mazharul Islam
CSE,SUST*/
#include<iostream>
#include<string>
using namespace std;
int main(){
long int n,k;
cin>>n>>k;
string s;
cin>>s;
long int flag=0,c=0;
for(long int i=0;i<n;i++){

        if(s[i]=='#'){
            ++c;
        }
        else if(s[i]=='.'){
            if(c+1>k)
            {
                flag=-1;
                break;
            }
            else{
                c=0;
                flag=0;}
        }
        //cout<<c<<endl;
        if(flag==-1)
            break;
        }

if(flag==-1)
    cout<<"NO"<<endl;
    else
        cout<<"YES"<<endl;

return 0;
}
