#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], b[100], ok;

void Sinh() {
    int i = k;
    while(i > 0 && a[i] == n - k + i) {
        i--;
    }
    if(i == 0) ok = 0;
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

bool check(int a[], int b[]) {
    for(int i = 1; i <= k; i++) {
        if(a[i] != b[i]) return false;
    }
    return true;
}

void Testcase() {
    cin >> n >> k;
    ok = 1;
    int cnt = 1;
    for(int i = 1; i <= k; i++) {
        cin >> b[i];
        a[i] = i;
    }
    while(ok) {
        if(check(a, b)) {
            cout << cnt << endl;
            break;
        }
        else {
            cnt++;
            Sinh();
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}