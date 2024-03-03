// BỘ BA SỐ CÓ TỔNG NHỎ HƠN K

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, k; cin >> n >> k;
        long long a[n];
        for(auto &x : a) cin >> x;
        long long cnt = 0;
        sort(a, a + n);
        for(long long i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                long long x = lower_bound(a + j + 1, a + n, k - a[i] - a[j]) - a;
                cnt += x - j - 1;
            }
        }
        cout << cnt << endl;
    }
}