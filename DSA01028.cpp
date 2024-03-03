#include <bits/stdc++.h>
using namespace std;

int n, k, a[100], ok;

void Sinh() {
    int i = k;
    while(i > 0 && a[i] == n - k + i) {
        i--;
    }
    if(i == 0) ok = 0;
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

int main() {
    cin >> n >> k;
    
    int x;
    set<int> se;
    for(int i = 0; i < n; i++) {
        cin >> x;
        se.insert(x);
    }
    vector<int> ve; ve.push_back(0);
    for(auto i : se) ve.push_back(i);
    
    n = ve.size() - 1;
    ok = 1;
    for(int i = 1; i <= k; i++) a[i] = i;
    while(ok) {
        for(int i = 1; i <= k; i++) cout << ve[a[i]] << " ";
        cout << endl;
        Sinh();
    }
}