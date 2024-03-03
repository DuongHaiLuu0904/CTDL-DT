// Sắp xếp chèn

#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n];
    for(auto &x : a) cin >> x;
    for(int i = 0; i < n; i++) {
        int tmp = a[i], pos = i - 1;
        while(pos >= 0 && tmp < a[pos]) {
            a[pos + 1] = a[pos];
            pos--; 
        }
        a[pos + 1] = tmp;
        cout << "Buoc " << i << ": ";
        for(int j = 0; j <= i ; j++) {
            cout << a[j] << " ";
        }
        cout << endl;
    }
}