// GIAO CỦA BA DÃY SỐ

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    long long n1, n2, n3; cin >> n1 >> n2 >> n3;
    long long a[n1], b[n2], c[n3];
    for(auto &x : a) cin >> x;
    for(auto &x : b) cin >> x;
    for(auto &x : c) cin >> x;

    vector<long long> ve;
    int x = 0, y = 0, z = 0;
    while(x < n1 && y < n2 && z < n3) {
        if(a[x] == b[y] && b[y] == c[z]) {
            ve.push_back(a[x]);
            x++; y++; z++;
        }
        else if(a[x] < b[y]) x++;
        else if(b[y] < c[z]) y++;
        else z++;
    }

    if(ve.size() == 0) cout << "-1" << endl;
    else {
        for(auto x : ve) cout << x << " ";
        cout << endl;
    }
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}