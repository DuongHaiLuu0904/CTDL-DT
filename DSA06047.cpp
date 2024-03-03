// BỘ BA SỐ PYTAGO

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    int n; cin >> n;
    long long a[n];
    for(auto &x : a) {
        cin >> x;
        x *= x;
    }
    sort(a, a + n);
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(binary_search(a + j + 1, a + n, a[i] + a[j])) {
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