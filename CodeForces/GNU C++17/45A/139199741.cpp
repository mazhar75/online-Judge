#include<iostream>
#include<string>
#include<map>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
vector<string>m;
vector<string>::iterator it;

m.push_back("January");
m.push_back("February");
m.push_back("March");
m.push_back("April");
m.push_back("May");
m.push_back("June");
m.push_back("July");
m.push_back("August");
m.push_back("September");
m.push_back("October");
m.push_back("November");
m.push_back("December");
string s;
cin>>s;
int k;
cin>>k;
 it = find (m.begin(), m.end(), s);
 int position = it - m.begin() + 1; // finding the position of given month
 int ans = (position+k)%12; // finding next month
 if (ans == 0) ans = 12; // since, (December)%12 = 0
 cout << m[ans-1] << endl; // since, the "m" vector is 0-based but our answer is 1-based

return 0;
}