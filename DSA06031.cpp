// Phần tử lớn nhất trong dãy con

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    int n, k; cin >> n >> k;
    int a[n];
    for(int &x : a) cin >> x;
    for(int i = 0; i < n - k + 1; i++) {
        cout << *max_element(a + i, a + i + k) << " ";
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}