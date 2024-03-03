// Dặt tên-1

#include<bits/stdc++.h>
using namespace std;

int n, k, x[100];
vector<string> v;
vector<vector<string>> v2;

void kq() {
    vector<string> a;
    for(int i = 1; i <= k; i++) {
        a.push_back(v[x[i]]);
    }
    sort(a.begin(), a.end());
    v2.push_back(a);
}

void Try(int i) {
    for(int j = x[i - 1] + 1; j <= n - k + i; j++) {
        x[i] = j;
        if(i == k) kq();
        else Try(i + 1);
    }
}

int main() {
    cin >> n >> k;
    set<string> se;
    while(n--) {
        string s; cin >> s;
        se.insert(s);
    }
    v.push_back("");
    for(auto x : se) v.push_back(x);
    n = v.size() - 1;
    Try(1);
    for(auto i : v2) {
        for(auto j : i) {
            cout << j << " ";
        }
        cout << endl;
    }
}
