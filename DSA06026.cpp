// Xắp sếp nổi bọt

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
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
        cout << "Buoc " << i + 1 << ": ";
        for(auto x : a) cout << x << " ";
        cout << endl;
    }
}