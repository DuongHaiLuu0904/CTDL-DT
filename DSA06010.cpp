#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        set<char> se;
        for(auto x : a) {
            string s = to_string(x);
            for(auto y : s) {
                se.insert(y);
            }
        }
        for(auto x : se) cout << x << " ";
        cout << endl;
    }
}
