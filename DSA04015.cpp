// TÍNH FLOOR(X)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n]; 
        for(auto &x : a) cin >> x;

        sort(a, a + n);
        int i = upper_bound(a, a + n, k) - a;
        if(i == 0) cout << "-1" << endl;
        else cout << i << endl;
    }
}