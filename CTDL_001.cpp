#include <bits/stdc++.h>
using namespace std;

int n, a[100], ok;

void Ktao() {
    for(int i = 1; i <= n; i++) {
        a[i] = 0;
    }
}

void Sinh() {
    int i = n;
    while(i >= 1 && a[i] == 1) {
        a[i] = 0;
        i--;
    }
    if(i == 0) ok = 0; 
    else a[i] = 1;
}

bool check(int a[], int n) {
    int l = 1;
    int r = n;
    while(l <= r) {
        if(a[l] != a[r]) return false;
        l++;
        r--;
    }
    return true;
}

int main() {
    cin >> n;
    ok = 1;
    Ktao();
    while(ok) {
        if(check(a, n)) {
            for(int i = 1; i <= n; i++) cout << a[i] << " ";
            cout << endl;
        } 
        Sinh();
    }
}