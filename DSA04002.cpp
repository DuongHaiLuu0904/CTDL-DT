// LŨY THỪA ĐẢO

#include <bits/stdc++.h>
#define ll long long
using namespace std;

const ll m = 1e9 + 7;

ll LuyThua(ll x, ll y) {
    if(y == 0) return 1;
    if(y == 1) return x % m;
    ll tmp = LuyThua(x, y / 2);
    if(y % 2 == 0) return (tmp * tmp % m);
    return (tmp * tmp % m) * x % m;
}

void Testcase() {
    ll n; cin >> n;
    string s = to_string(n);
    reverse(s.begin(), s.end());
    ll k = stoll(s);
    cout << LuyThua(n, k) << endl;
}

int main() {
    int t; cin >> t; 
    while(t--) Testcase();
}