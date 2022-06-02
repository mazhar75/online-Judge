/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
#include <cstdlib>
#define F first
#define S second
#define PB push_back
#define MP make_pair
using namespace std;
typedef long long int ll;
#define REP(i, a, b) for (long long int i=a; i>=b; i--)
#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};
//public:
void cp::think(){

    ll n;
    cin>>n;
    vector<int>digit;
    if(n%2==0)
        cout<<0<<endl;
    else{
            int flag=1;
        while(n){
            digit.push_back(n%10);
            n=n/10;
        }
        reverse(digit.begin(),digit.end());
          if(digit[0]%2==0)
                cout<<1<<endl;
                else{
        for(int i=0;i<digit.size();i++){

            if(digit[i]%2==0)
            { flag=1;
              break;}
              else
                flag=0;

        }
        if(flag==1)
            cout<<2<<endl;
        else
            cout<<-1<<endl;
    }
    }


}
/**void cp::binary(ll n){
    string s;
    while(n){
        s=n%2;
        n=n/2;
    }
    cout<<s<<endl;
}*/
int main() {
    RUN_FAST;
    cp me;
  int t;
 cin>>t;
  while(t--){
    me.think();
  }
  return 0;
}
