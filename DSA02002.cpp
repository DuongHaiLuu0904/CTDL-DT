#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;
vector<vector<int>> c;

void in(vector<int> c) {
    cout << "[";
    int k = c.size();
    for(int i = 0; i < k; i++) {
        cout << c[i];
        if(i != k - 1) cout << " ";
    }
    cout << "] ";
}

void Try(int i) {
    c.push_back(a);
    if (i == 1) return;
    for (int j = 0; j < i - 1; ++j) {
        b.push_back(a[j] + a[j + 1]);
    }
    a = b;
    a.resize(i - 1);
    b.clear();
    Try(i - 1);
}

void Testcase() {
    cin >> n;
    c.clear();
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    Try(n);
    reverse(c.begin(), c.end());
    for(auto x : c) in(x);
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}