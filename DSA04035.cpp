// TÍNH LŨY THỪA

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll m = 1e9 + 7;

ll Luy_Thua(ll a, ll b) {
    if(b == 0) return 1;
    if(b == 1)  return a % m;
    ll tmp = Luy_Thua(a, b / 2);
    if(b % 2 == 0) return (tmp * tmp % m);
    return (tmp * tmp % m) * a % m;
}

int main() {
    int t = 20;
    while(t--) {
        ll a, b; cin >> a >> b;
        if(a == 0 && b == 0) break;
        cout << Luy_Thua(a, b) << endl;
    }
}