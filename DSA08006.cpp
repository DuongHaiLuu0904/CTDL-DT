// SỐ 0 VÀ SỐ 9

#include <bits/stdc++.h>
using namespace std;

#define ll long long 

vector<ll> ve;
map<ll, ll> mp;

void Tao() {
    queue<string> qu;
    qu.push("9");
    ve.push_back(9);
    while(true) {
        string top = qu.front();
        qu.pop();
        if(top.size() == 10) break;
        ve.push_back(stoll(top + "0"));
        ve.push_back(stoll(top + "9"));
        qu.push(top + "0");
        qu.push(top + "9");
    }

    for(int i = 1; i <= 100; i++) {
        for(auto x : ve) {
            if(x % i == 0) {
                mp[i] = x;
                break;
            }
        }
    }
}

int main() {
    Tao();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n; 
        cout << mp[n] << endl;
    }
}