// Tìm MAX

#include <bits/stdc++.h>
using namespace std;

const long long k = (1e9 + 7);

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        long long max = 0;
        for(auto &x : a) cin >> x;
        sort(a, a + n);
        for(int i = 0; i < n; i++) {
            max += (long long)a[i] * i;
            max %= k;
        } 
        cout << max << endl;
    }
}