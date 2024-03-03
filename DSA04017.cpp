// PHẦN TỬ KHÁC NHAU

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    int n; cin >> n;
    int a[n], b[n] = {0};
    for(auto &x : a) cin >> x;
    for(int i = 0; i < n - 1; i++) cin >> b[i];
    
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) {
            cout << i + 1 << endl;
            return;
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}