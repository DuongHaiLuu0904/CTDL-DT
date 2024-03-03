// LŨY THỪA MA TRẬN 2

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll m = 1e9 + 7;

ll a[10][10], b[10][10];
ll n, k;

void Nhan(ll x[10][10], ll y[10][10]) {
    ll tmp[10][10];
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            ll res = 0;
            for(int k = 0; k < n; k++) {
                res += (x[i][k] * y[k][j]) % m;
                res %= m;
            }
            tmp[i][j] = res;
        }
    }
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            a[i][j] = tmp[i][j];
        }
    }
}

void Luy_Thua(ll a[10][10], ll n) {
    if(n <= 1) return;
    Luy_Thua(a, n / 2);
    Nhan(a, a);
    if(n % 2 == 1) Nhan(a, b);
}

void Testcase() {
    cin >> n >> k;
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> a[i][j];
            b[i][j] = a[i][j];
        }
    }

    Luy_Thua(a, k);
    ll sum = 0;
    for(int i = 0; i < n; i++) {
        sum +=(a[i][n - 1] % m);
        sum %= m; 
    }
    cout << sum << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}