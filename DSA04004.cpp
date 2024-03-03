// GẤP ĐÔI DÃY SỐ

// #include <bits/stdc++.h>
// using namespace std;

// long long Test(long long n, long long k) {
//     long long x = pow(2, n) - 1;
//     long long mid = x / 2 + (x % 2);
//     if(mid == k) return n;
//     else if(mid > k) return Test(n - 1, k);
//     else return Test(n - 1, k - mid);
// }

// int main() {
//     int t; cin >> t;
//     while(t--) {
//         long long n, k; cin >> n >> k;
//         cout << Test(n, k) << endl;
//     }
// }

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, k; cin >> n >> k;
        long long cnt = 1;
        while(k % 2 == 0) {
            k /= 2;
            cnt++;
        }
        cout << cnt << endl;
    }
}