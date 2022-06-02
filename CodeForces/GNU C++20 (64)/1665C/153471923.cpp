// Md.Mazharul Islam


#include <bits/stdc++.h>
using namespace std;

int ans;

void proc(vector<int>& a) {
    if (a.empty()) return;
    int n = a.size();
    int last = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] == a[0]) {
            last = i;
        } else {
            break;
        }
    }
    --a[last];
    for (int i = 0; i < n; ++i) --a[i];
    ++ans;
    while (!a.empty() && a.back() <= 0) {
        a.pop_back();
    }
    proc(a);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    int T;
    cin >> T;
    while (T --> 0) {
        int n;
        cin >> n;
        vector<int> a(n);
        ans = 0;
        for (int i = 1; i < n; ++i) {
            int x;
            cin >> x;
            ++a[--x];
        }
        a.emplace_back(1);
        sort(a.rbegin(), a.rend());
        while (!a.empty() && a.back() <= 0) a.pop_back();
        n = a.size();
        for (int i = 0; i < n; ++i) {
            a[i] = a[i] - (n - i);
            ++ans;
        }
        sort(a.rbegin(), a.rend());
        while (!a.empty() && a.back() <= 0) a.pop_back();
        proc(a);
        cout << ans << '\n';
    }
    return 0;
}