// ĐẾM SỐ 0

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        int i = lower_bound(a, a + n, 1) - a;
        cout << i << endl;
    }
}