/** Never give up.slow and steady wins the race*/
/** author:Md.Mazharul Islam*/
#include <bits/stdc++.h>
#include<stack>
#define endl "\n"

using namespace std;
typedef long long int ll;
typedef pair<int,int>pii;
const int N =1e9;
const int MAXN = 100010;


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


void cp::think(int o)
{
    int n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    map<ll,int>m;
    for(int i=0; i<n; i++)
    {
        m[a[i]]++;
    }
    int q=0;
    for(auto it=m.begin(); it!=m.end(); it++)
    {
        q=max(q,it->second);
    }
    int cnt=0,d=q;
    while(q<n)
    {
        cnt+=1;
        if((n-d)>=q)
        cnt+=q;
        else cnt+=(n-q);
        q=q*2;
        d=d*2;





    }
    cout<<cnt<<endl;




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
