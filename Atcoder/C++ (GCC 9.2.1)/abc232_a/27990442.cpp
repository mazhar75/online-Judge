/** Author:Md.Mazharul Islam
CSE,SUST*/
#include<iostream>
#include<string>
#include<map>
#include<iterator>
#include<vector>
#include<algorithm>
#include<utility>
#define endl "\n"
using namespace std;


int main(){
string s;
cin>>s;
char c1,c2;
c1=s[0];
c2=s[2];
int x,y;
x=c1-'0';
y=c2-'0';
cout<<x*y<<endl;


return 0;
}
