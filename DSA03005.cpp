#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(auto &x : a) cin >> x;
        sort(a, a + n);
        k = min(k, n - k);

        int s1 = 0, s2 = 0;
        for(int i = 0; i < k; i++) s1 += a[i];
        for(int i = k; i < n; i++) s2 += a[i];
        cout << s2 - s1 << endl;
    }
}