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
typedef pair<int,int>pii;
#define REP(i, a, b) for (long long int i=a; i<b; i++)
#define RUN_FAST ios::sync_with_stdio(false);
class cp{
public:
void think();
void binary();
};
string decToBinary(int n)
{   string s1="";

     while(n) {
 	s1 += (n%2) + '0';
    n /= 2;}

 reverse(s1.begin(),s1.end());
 return s1;
}

int long long power(int x, unsigned long long int y)
{
    int res = 1; // Initialize result

    while (y > 0) {
        // If y is odd, multiply x with result
        if (y & 1)
            res = res * x;

        // y must be even now
        y = y >> 1; // y = y/2
        x = x * x; // Change x to x^2
    }
    return res;
}
//public:
void cp::think(){
 string s;
 cin>>s;
 bool prime[65];
 vector<string>vec;
 memset(prime,true,sizeof(prime));
 for(int p=2;p*p<=64;p++)
  {
    if(prime[p]==true){
      for(int i=p*p;i<=64;i+=p)
        prime[i]=false;

    }
  }
 for(int i=2;i<=64;i++){
    if(prime[i])
    { //cout<<i<<" ";
      string r=decToBinary(i);
      vec.push_back(r);
    }
 }
//for(auto it =vec.begin();it!=vec.end();it++)
//cout<<*it<<endl;
int flag=0;
for(auto it=vec.begin();it!=vec.end();it++)
 { size_t l=s.find(*it);
    if(l!= string::npos)
    {
      flag=1;
      break;
    }


 }
 if(flag==1)
 cout<<"YES"<<endl;
 else
 cout<<"NO"<<endl;

     }




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
