// ĐIỂM CÂN BẰNG

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    int n; cin >> n;
    int a[n];
    int s1 = 0, s2 = 0;
    for(auto &x : a) {
        cin >> x;
        s1 += x;
    }
    int cnt = -1;
    for(int i = 0; i < n; i++) {
        if(s2 * 2 + a[i] == s1) {
            cnt = i + 1;
            break;
        }
        s2 += a[i];
    }
    cout << cnt << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}