#include <bits/stdc++.h>
using namespace std;

void Testcase() { 
    int n; cin >> n;
    int a[n];
    set<int> se;
    for(auto &x : a) {
        cin >> x;
        se.insert(x);
    }
    int check = 0;
    if(se.size() < 2) {
        cout << "-1" << endl;
        return;
    }
    for(auto x : se) {
        cout << x << " ";
        check++;
        if(check == 2) break;
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}