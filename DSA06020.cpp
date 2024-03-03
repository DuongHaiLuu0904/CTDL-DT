#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(auto &x : a) cin >> x;
        if(binary_search(a, a + n, k)) cout << "1";
        else cout << "-1";
        cout << endl;
    }
}