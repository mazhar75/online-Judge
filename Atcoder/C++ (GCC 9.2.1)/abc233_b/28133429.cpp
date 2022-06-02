
/** Author:Md.Mazharul Islam
CSE,SUST*/
#include <bits/stdc++.h>

#define endl  "\n"
using namespace std;

void solve(){
long int l,r;
cin>>l>>r;
string s,temp,temp1,temp2;
cin>>s;
long int L=s.length();
temp1=s.substr(0,l-1);
temp=s.substr(l-1,r-l+1);
temp2=s.substr(r,L-r);
reverse(temp.begin(),temp.end());
//cout<<temp1<<" "<<temp<<" "<<temp2<<endl;
cout<<temp1+temp+temp2<<endl;

}


int main()
{
    solve();
    return 0;
}
