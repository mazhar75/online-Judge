/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <iostream>
#include<vector>
#include<algorithm>
#include<cmath>
#include<queue>
#include<cstdio>
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
ll f(int n){
ll val=n*n+2*n+3;
return val;

}
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
  int a, b;
    cin >> a >> b;
    int pXor;
    if (a % 4 == 1) {pXor = a - 1;}
    else if (a % 4 == 2) {pXor = 1;}
    else if (a % 4 == 3) {pXor = a;}
    else {pXor = 0;}

    if (pXor == b) {cout << a << '\n';}
    else if ((pXor ^ b) != a) {cout << a + 1 << '\n';}
    else {cout << a + 2 << '\n';}



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
