// Sắp xếp chèn - Liệt kê ngược

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    vector<vector<int>> b;
    for(auto &x : a) cin >> x;
    for(int i = 0; i < n; i++) {
        int tmp = a[i], pos = i - 1;
        while(pos >= 0 && tmp < a[pos]) {
            a[pos + 1] = a[pos];
            pos--; 
        }
        a[pos + 1] = tmp;
        vector<int> c;
        for(int j = 0; j <= i ; j++) c.push_back(a[j]);
        b.push_back(c);
    }
    int k = b.size();
    for(int i = k - 1; i >= 0; i--) {
        cout << "Buoc " << i << ": ";
        for(auto x : b[i]) cout << x << " ";
        cout << endl;
    }
}