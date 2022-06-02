/** Author:Md.Mazharul Islam
CSE,SUST*/
#include<iostream>
#include<cstdio>
#include<string>
#include<map>
#include<iterator>
#include<vector>
#include<algorithm>
using namespace std;

int main(){
int n, p1, p2, p3, t1, t2;
        scanf("%d%d%d%d%d%d", &n, &p1, &p2, &p3, &t1, &t2);
        int l, r;
        scanf("%d%d", &l, &r);
        int lst = r;
        int ans = (r - l) * p1;
        for (int i = 1, l, r; i < n; i++) {
            scanf("%d%d", &l, &r);
            ans += (r - l) * p1;
            int dif = l - lst;
            lst = r;
            dif -= t1;
            if (dif > 0) {
                ans += p1*t1;
                dif -= t2;
                if (dif > 0) {
                    ans += p2*t2;
                    ans += p3*dif;
                } else {
                    dif += t2;
                    ans += p2*dif;
                }
            } else {
                dif += t1;
                ans += dif*p1;
            }
        } printf("%d\n", ans);


return 0;
}
