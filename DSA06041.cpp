// SỐ XUẤT HIỆN NHIỀU NHẤT

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    int n; cin >> n;
    int a[n];
    map<int, int> mp;
    for(auto &x : a) {
        cin >> x;
        mp[x]++;
    }
    int tmp1 = 0, tmp2 = 0;
    for(auto x : mp) {
        if(tmp2 < x.second) {
            tmp1 = x.first;
            tmp2 = x.second;
        }
    }
    if(tmp2 > n / 2) cout << tmp1 << endl;
    else cout << "NO" << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}