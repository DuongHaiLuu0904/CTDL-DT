// TÌM KIẾM NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

int Tim_Kiem(int a[], int n, int k) {
    int l = 0, r = n - 1;
    while(l <= r) {
        int m = (l + r) / 2;
        if(a[m] == k) return m;
        else if(a[m] > k) r = m - 1;
        else l = m + 1;
    }
    return -1;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int a[n];
        for(auto &x : a) cin >> x;
        int i = Tim_Kiem(a, n, k);
        if(i == -1) cout << "NO" << endl;
        else cout << i + 1 << endl;
    }
}