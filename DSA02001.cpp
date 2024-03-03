#include <bits/stdc++.h>
using namespace std;

int n;
vector<int> a, b;

void in() {
    cout << "[";
    int k = a.size();
    for(int i = 0; i < k; i++) {
        cout << a[i];
        if(i != k - 1) cout << " ";
    }
    cout << "]" << endl;
}

void Try(int i) {
    in();
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
    a.resize(n);
    for(int i = 0; i < n; i++) cin >> a[i];
    Try(n);
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}