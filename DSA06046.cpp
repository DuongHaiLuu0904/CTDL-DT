// CHÊNH LỆCH NHỎ NHẤT

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    int n; cin >> n;
    int a[n];
    for(auto &x : a) cin >> x;
    sort(a, a + n);
    vector<int> ve;
    for(int i = 0; i < n - 1; i++) {
        ve.push_back(a[i + 1] - a[i]);
    }
    sort(ve.begin(), ve.end());
    cout << ve[0] << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}