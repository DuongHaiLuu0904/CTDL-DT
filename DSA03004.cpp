// Tổng nhỏ nhất

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n + 2];
        for(int i = 0; i < n; i++) cin >> a[i];
        a[n] = a[n + 1] = 0;
        sort(a, a + n, greater<int>());
        
        int i = 0, du = 0, k = 0;
        long long sum = 0;
        while(i <= n) {
            int c = a[i] + a[i + 1];
            int d = (c + du) % 10;
            sum += (long long)d * pow(10, k);
            i += 2;
            k++;
            du = (c + du) / 10;
        }
        cout << sum << endl;
    }
}