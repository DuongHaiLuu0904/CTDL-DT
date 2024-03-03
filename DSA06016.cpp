#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, m; cin >> n >> m;
        long long a[n], b[m];
        for(auto &x : a) cin >> x;
        for(auto &x : b) cin >> x;
        cout << (*max_element(a, a + n)) * (*min_element(b, b + m));
        cout << endl;
    }
}