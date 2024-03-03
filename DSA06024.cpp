// Sắp Xếp chọn

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(auto &x : a) cin >> x;
    for(int i = 0; i < n - 1; i++) {
        int cnt = i;
        for(int j = i + 1; j < n; j++) {
            if(a[cnt] > a[j]) cnt = j;
        }
        swap(a[cnt], a[i]);
        cout << "Buoc " << i + 1 << ": ";
        for(auto x : a) cout << x << " ";
        cout << endl;
    }
}