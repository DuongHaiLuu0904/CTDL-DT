// con ếch

#include <bits/stdc++.h>
using namespace std;

long long f[55];

void check() {
    f[0] = f[1] = 1;
    f[2] = 2;
    for(int i = 3; i <= 50; i++) {
        f[i] = f[i - 1] + f[i - 2] + f[i - 3];
    }
}

int main() {
    check();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        cout << f[n] << endl;
    }
}