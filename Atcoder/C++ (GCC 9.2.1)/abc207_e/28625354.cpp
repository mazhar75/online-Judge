#include<bits/stdc++.h>
using namespace std;

using ll = long long;
const int mod = 1e9+7;

int main(){
    int N; cin >> N;
    vector<ll> A(N), sum(N+1);
    for(int i=0; i<N; i++){
        cin >> A[i];
        sum[i+1] = sum[i]+A[i];
    }
    vector<vector<int>> dp(N+2,vector<int>(N+2));
    dp[1][0]++;
    int ans = 0;
    for(int i=0; i<N; i++){
        for(int j=N; 1<=j; j--){
            dp[j+1][sum[i+1]%(j+1)] += dp[j][sum[i+1]%j];
            dp[j+1][sum[i+1]%(j+1)] %= mod;
            if(i == N-1){
                ans += dp[j][sum[i+1]%j];
                ans %= mod;
            }
        }   
    }
    cout << ans << endl;
}
