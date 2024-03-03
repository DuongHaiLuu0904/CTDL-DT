// BỘ BA SỐ BẰNG K

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(auto &x : a) cin >> x;
    sort(a.begin(), a.end());
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(binary_search(a.begin() + j + 1, a.end(), k - a[i] - a[j])) {
                cout << "YES" << endl;
                return;
            }
        }
    }
    cout << "NO" << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}