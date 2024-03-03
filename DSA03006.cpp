#include <bits/stdc++.h>
using namespace std;

bool check(int a[], int b[], int n) {
    for(int i = 0; i < n; i++) {
        if(b[i] != a[i] && b[i] != a[n - 1 -i]) 
            return false;
    }
    return true;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n], b[n];
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = a[i];
        }
        sort(a, a + n);

        if(check(a, b, n)) cout << "Yes" << endl;
        else cout << "No" << endl;
    }
}