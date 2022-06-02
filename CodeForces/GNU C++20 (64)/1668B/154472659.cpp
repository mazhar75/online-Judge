/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
#include<stack>
#define endl "\n"
//#define rr(i, a, b) for(long long int i=a; i<b; i++)
//#define vin(n, a) vector <long long int> a(n); rr(i, 0, n) cin >> a[i]

using namespace std;
typedef long long int ll;
/**typedef pair<int,int>pii;
const int N =1e9;
const int MAXN = 100010;
int cnt;
*/

class cp
{
public:
    void think(int);
};

/**bool isPowerOfTwo(ll n)
{
    return ((n)&(n-1)); // if 0 than yes else false
}
ll PowerOfTwo(int n)
{
    return 1<<n;
}
int isSubSequence(char str1[], char str2[], int m, int n)
{
    int j = 0; // For index of str1 (or subsequence

    // Traverse str2 and str1, and
    // compare current character
    // of str2 with first unmatched char
    // of str1, if matched
    // then move ahead in str1
    for (int i = 0; i < n && j < m; i++)
        if (str1[j] == str2[i])
            j++;

    // If all characters of str1 were found in str2
    return j;
}



int func(int x)
{
    int ans=1e9;
    for(int i=0; i<=16; i++)
    {
        ans=min(ans, 15+i-(__builtin_ctz(x+i)));
        //cout<<(__builtin_ctz(x+i))<<" ";
    }
    return ans;

}
//problem B
 int n,x;
    cin>>n>>x;
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    sort(a.begin(),a.end());
    int y=a[0];
    if(n*y>=x)
    {
        cout<<n<<endl;
        return;
    }
    if(x%(n*y)==0)cout<<(x*n/(n*y))<<endl;
    else cout<<((x/(n*y)+1)*n)<<endl;

*/
//main code
void cp::think(int o)
{
   ll n,x;
   cin>>n>>x;
   vector<ll>a(n);
   for(ll i=0;i<n;i++)cin>>a[i];
   sort(a.begin(),a.end());
   ll sum=a[n-1]*2;
   for(ll i=n-2;i>0;i--){
     sum+=a[i];
   }
   sum+=n;
   if(sum>x)cout<<"NO"<<endl;
   else cout<<"YES"<<endl;

}





int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0);

    cp me;
    int t,i=1;
    cin>>t;
    while(t--)
    {

        me.think(i);
        i++;

    }
    return 0;
}