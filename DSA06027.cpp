// Sắp xếp đổi chỗ trực tiếp - Liệt kê ngược

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector<int> a(n);
        vector<vector<int>> b;
        for(auto &x : a) cin >> x;
        for(int i = 0; i < n - 1; i++) {
            for(int j = i + 1; j < n; j++) {
                if(a[i] > a[j]) swap(a[i], a[j]);
            }
            b.push_back(a);
        }
        int k = b.size();
        for(int i = k - 1; i >= 0; i--) {
            cout << "Buoc " << i + 1 << ": ";
            for(auto x : b[i]) cout << x << " ";
            cout << endl;
        }
    }
}