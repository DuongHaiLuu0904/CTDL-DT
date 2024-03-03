// SỐ ĐẦU TIÊN BỊ LẶP

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    int n; cin >> n;
    int a[n];
    map<int, int> mp;
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    for(int i = 0; i < n; i++) {
        if(mp[a[i]] > 1) {
            cout << a[i] << endl;
            return;
        }
    }
    cout << "NO" << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}