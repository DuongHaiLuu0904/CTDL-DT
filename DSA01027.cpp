#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;
    int a[n], b[n];
    for(int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = i + 1;
    }
    sort(a, a + n);

    do {
        for(int i = 0; i < n; i++) {
            cout << a[b[i] - 1] << " ";
        }
        cout << endl;

    }
    while(next_permutation(b, b + n));
}
