// LŨY THỪA

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll m = 1e9 + 7;

ll LuyThua(ll a, ll b) {
    if(b == 0) return 1;
    ll tmp = LuyThua(a, b / 2);
    if(b % 2 == 0) return (tmp % m) * (tmp % m) % m;
    return ((tmp % m) * (tmp % m) % m) * (a % m) % m;
}

void Testcase() {
    ll n, k; cin >> n >> k;
    cout << LuyThua(n, k) << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}