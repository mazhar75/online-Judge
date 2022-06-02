#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    scanf("%d", &n);
    int ans = 0, fin_ans = 0;
    for (int i = 0, a, b; i < n; i++) {
        scanf("%d%d", &a, &b);
        ans += b - a;
        fin_ans = max(fin_ans, ans);
    } printf("%d", fin_ans);

    return 0;
}