// SỐ LẦN QUAY VÒNG

#include <bits/stdc++.h>
using namespace std;

bool check(int a[], int b[], int n) {
    for(int i = 0; i < n; i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

void Dao(int a[], int n) {
    int tmp = a[n - 1];
    for(int i = n - 1; i >= 1; i--) {
        a[i] = a[i - 1];
    }
    a[0] = tmp;
}

void Testcase() {
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = a[i];
    }
    sort(a, a + n);
    int cnt = 0;
    while(!check(a, b, n)) {
        cnt++;
        Dao(a, n);
    }
    cout << cnt << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}