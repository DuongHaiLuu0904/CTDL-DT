#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, m; cin >> n >> m;
        int a[n], b[m];
        map<int, int> mp;
        for(auto &x : a) {
            cin >> x;
            mp[x]++;
        }
        for(auto &x : b) {
            cin >> x;
            mp[x]++;
        }
        for(auto x : mp) {
            cout << x.first << " ";
        }
        cout << endl;
        for(auto x : mp) {
            if(x.second > 1) cout << x.first << " ";
        }
        cout << endl;
    }
}