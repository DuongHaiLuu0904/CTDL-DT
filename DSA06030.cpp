// Xắp sếp nổi bọt - Liệt kê ngược

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    int n; cin >> n;
    vector<int> a(n);
    vector<vector<int>> b;
    for(auto &x : a) cin >> x;
    for(int i = 0; i < n - 1; i++) {
        bool check = false;
        for(int j = 0; j < n - i - 1; j++) {
            if(a[j] > a[j + 1]) {
                swap(a[j], a[j + 1]);
                check = true;
            }
        }
        if(!check) break;
        b.push_back(a);
    }
    int k = b.size();
    for(int i = k - 1; i >= 0; i--) {
        cout << "Buoc " << i + 1 << ": ";
        for(auto x : b[i]) cout << x << " ";
        cout << endl;
    }
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}