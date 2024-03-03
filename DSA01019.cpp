// HAHAHA

#include<bits/stdc++.h>
using namespace std;

int n, a[100], ok;

void Ktao() {
    for(int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

void Sinh() {
    int i = n;
    while(i > 0 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 0;
    else a[i] = 1;
}

bool check() {
    if(a[1] == 0 || a[n] == 1) return false;
    for(int i = 1; i < n; i++) {
        if(a[i] == 1 && a[i + 1] == 1) return false;
    }
    return true;
}

void Testcase() {
    cin >> n; 
    ok = 1;
    Ktao();
    while(ok) {
        if(check()) {
            for(int i = 1; i <= n; i++) {
                if(a[i]) cout << "H";
                else cout << "A";
            }
            cout << endl;
        }
        Sinh();
    }
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}