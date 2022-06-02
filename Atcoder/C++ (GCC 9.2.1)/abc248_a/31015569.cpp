/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
#include<stack>
#define endl "\n"
#define rr(i, a, b) for(int i=a; i<b; i++)
#define vin(n, a) vector <int> a(n); rr(i, 0, n) cin >> a[i]

using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;
const int N =1e9;
const int MAXN = 100010;
int cnt;


class cp
{
public:
    void think(int);
};

bool isPowerOfTwo(ll n)
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
void proc(vector<int>& ans)
{
    if (ans.empty()) return;
    int n = ans.size();
    int last = 0;
    for (int i = 0; i < n; ++i)
    {
        if (ans[i] == ans[0])
        {
            last = i;
        }
        else
        {
            break;
        }
    }
    --ans[last];
    for (int i = 0; i < n; ++i) --ans[i];
    ++cnt;
    while (!ans.empty() && ans.back() <= 0)
    {
        ans.pop_back();
    }
    proc(ans);
}

//main code
void cp::think(int o)
{
    string s;
    cin>>s;
    for(int i=0; i<=9; i++)
    {
        string q=to_string(i);
        size_t found=s.find(q);
        if (found!=string::npos)
            continue;
        cout<<i<<endl;
        return;
    }


}





int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0);

    cp me;
    int t=1,i=1;
    //cin>>t;
    while(t--)
    {

        me.think(i);
        i++;

    }
    return 0;
}
