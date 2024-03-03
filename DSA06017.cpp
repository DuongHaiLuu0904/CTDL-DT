#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        vector<int> v;
        int a = n + m;
        while(a--) {
            int x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        for(auto &x : v) cout << x << " ";
        cout << endl;
    }
}