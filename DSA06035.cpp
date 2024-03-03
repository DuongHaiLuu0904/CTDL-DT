// DÃY TAM GIÁC DÀI NHẤT

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(int i = 1; i <= n; i++) cin >> a[i];

        int l[n + 2] = {0}, r[n + 2] = {0};

        for(int i = 1; i <= n; i++) {
            if(a[i] > a[i - 1]) l[i] = l[i - 1] + 1;
            else l[i] = 1;
        }

        for(int i = n; i > 0; i--) {
            if(a[i] > a[i + 1]) r[i] = r[i + 1] + 1;
            else r[i] = 1;
        }

        int cnt = 0;
        for(int i = 1; i <= n; i++) {
            cnt = max(cnt, l[i] + r[i] - 1);
        }

        cout << cnt << endl;
    }
}