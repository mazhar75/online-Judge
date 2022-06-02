#include<iostream>
#include<sstream>
#include<map>
#include<cstdio>
#include<vector>
#include<iterator>
#include<algorithm>
#include<set>
using namespace std;
typedef long long int ll;

#define RUN_FAST ios::sync_with_stdio(false);

void solve(){
ll n;
cin>>n;
string s,p,q;
cin>>s;
p="code";q="chef";
size_t found1,found2;
found1=s.find(p);
found2=s.find(q);
if(found1<found2)
    cout<<"AC"<<endl;
else
    cout<<"WA"<<endl;
}

int main(){
    long int t;
    cin>>t;
    while(t--){
        solve();}
    return 0;



}
