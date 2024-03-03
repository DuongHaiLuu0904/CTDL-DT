// SỐ BDN 1

#include <bits/stdc++.h>
using namespace std;

#define ll long long 

vector<ll> ve;

void Tao() {
    queue<string> qu;
    qu.push("1");
    ve.push_back(1);
    while(true) {
        string top = qu.front();
        qu.pop();
        if(top.size() == 19) break;
        ve.push_back(stoll(top + "0"));
        ve.push_back(stoll(top + "1"));
        qu.push(top + "0");
        qu.push(top + "1");
    }

}

int main() {
    Tao();
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n; 
        int it = upper_bound(ve.begin(), ve.end(), n) - ve.begin();
        cout << it << endl;
    }
}