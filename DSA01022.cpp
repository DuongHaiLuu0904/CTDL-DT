#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int n, a[100], b[100], ok;

bool check(int a[], int b[]) {
    for(int i = 0; i < n; i++) {
        if( a[i] != b[i]) return false;
    }
    return true;
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n;
        for(int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = i + 1;
        }
        int cnt = 1;
        do {
            if(check(a, b)) {
                cout << cnt << endl;
                break;
            }
            else cnt++;
        } 
        while(next_permutation(b, b + n));
    }
}