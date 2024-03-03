// ĐẾM CẶP

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    int n, k; cin >> n >> k;
    int a[n];
    for(auto &x : a) cin >> x;
    sort(a, a + n);
    long long cnt = 0;
    for(int i = 0; i < n - 1; i++) {
        int x = lower_bound(a + i + 1, a + n, k + a[i]) - a;
        cnt += x - i - 1;
    }
    cout << cnt << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}