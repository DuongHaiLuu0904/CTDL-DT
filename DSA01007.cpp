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

void Testcase() {
    cin >> n; 
    ok = 1;
    Ktao();
    while(ok) {
        for(int i = 1; i <= n; i++) {
            if(a[i]) cout << "B";
            else cout << "A";
        }
        cout << " ";
        Sinh();
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}