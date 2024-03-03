#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t; 
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n];
        map<int, int> mp;
        for(auto &x : a) {
            cin >> x;
            mp[x]++;

        }
        if(mp[k] == 0) cout << "-1" << endl;
        else cout << mp[k] << endl;
    }
}