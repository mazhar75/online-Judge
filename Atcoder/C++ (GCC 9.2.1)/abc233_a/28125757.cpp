
/** Author:Md.Mazharul Islam
CSE,SUST*/
#include <bits/stdc++.h>

#define endl  "\n"
using namespace std;

void solve(){
int x,y;
cin>>x>>y;
if(x>=y)
    cout<<0<<endl;
else
{
    if((y-x)%10==0)
        cout<<(y-x)/10<<endl;
    else
        cout<<((y-x)/10)+1<<endl;
}
}


int main()
{
    solve();
    return 0;
}
