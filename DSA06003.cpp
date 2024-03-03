#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        int cnt = 0;
        int k;
        for(int i = 0; i < n - 1; i++) {
            k = i;
            for(int j = i + 1; j < n; j++) {
                if(a[k] > a[j]) k = j;
            }
            if(k != i) cnt++;
            swap(a[i], a[k]);
        }
        cout << cnt << endl;
    }
}