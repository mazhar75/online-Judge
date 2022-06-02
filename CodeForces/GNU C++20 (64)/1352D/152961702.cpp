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
    vector<int>a(n);
    for(int i=0; i<n; i++)cin>>a[i];
    int move=0;
    int alice=0,bob=0;
    alice+=a[0];
    int i=0,j=n-1;
    int sum=alice;
    int p=alice,q=0;
    bool flag1=true,flag=false;
    int cnt=1;
                  while(i<j)
    {
        if(flag1)
        {
            if(sum>=bob )
            {
                bob+=a[j];
                j--;
            }
            if(sum<bob or i==j)
            {
                sum=bob;
                q+=sum;
                cnt++;
                flag=true;
                alice=0;
                flag1=false;
                bob=0;


            }
        }
        if(flag)
        {

            if(sum>=alice)
            {     i++;
                alice+=a[i];


            }
            if(sum<alice or i==j)
            {
                sum=alice;
                p+=sum;
                bob=0;
                cnt++;
                flag=false;
                flag1=true;
                alice=0;

            }

        }


    }
    cout<<cnt<<" "<<p<<" "<<q<<endl;




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
