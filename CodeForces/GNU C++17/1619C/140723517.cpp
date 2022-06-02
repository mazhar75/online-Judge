/** Author:Md.Mazharul Islam
CSE,SUST*/
#include<iostream>
#include<cmath>
#include<string>
#include<map>
#include<iterator>
#include<vector>
#include<algorithm>
#include<utility>
#include<set>
#include<cstdio>
#define endl "\n"
using namespace std;
typedef long long int ll;
void solve(){
  ll a, s;
    cin >> a >> s;
    vector<int>b;
    while(s){
        int x = a % 10;
        int y = s % 10;
        if(x <= y) b.push_back(y - x);
        else{
            s /= 10;
            y += 10 * (s % 10);
            if(x < y && y >= 10 && y <= 19) b.push_back(y - x);
            else{
                cout << -1 << '\n';
                return;
            }
        }
        a /= 10;
        s /= 10;
    }
    if(a) cout << -1 << '\n';
    else{
        while (b.back() == 0) b.pop_back();
        for(int i = b.size() - 1; i >= 0; i--) cout << b[i];
        cout << '\n';
    }
}


int main(){
    ios_base ::sync_with_stdio(false);
    cin.tie(nullptr);
int t;
cin>>t;
while(t){
  solve();
  t--;
}


return 0;
}
