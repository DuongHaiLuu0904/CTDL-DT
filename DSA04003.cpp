// ĐẾM DÃY

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll m = 123456789;

ll LuyThua(ll a, ll b) {
    if(b == 0) return 1;
    if(b == 1) return a % m;
    ll tmp = LuyThua(a, b / 2);
    if(b % 2 == 0) return (tmp * tmp % m);
    return (tmp * tmp % m) * a % m;
}

void Testcase() {
    ll n; cin >> n;
    cout << LuyThua(2, n - 1) << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();   
}