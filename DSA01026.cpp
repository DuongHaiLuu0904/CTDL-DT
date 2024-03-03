#include <bits/stdc++.h>
using namespace std;

int n, a[100], ok;

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
    if(a[1] != 1 || a[n] != 0) return false;
    
    for(int i = 1; i < n; i++) {
        if(a[i] == 1 && a[i + 1] == 1) return false;
    }

    for(int i = 1; i <n; i++) {
        if(a[i] == 0) {
            int cnt = 1;
            for(int j = i + 1; j <= n; j++) {
                if(a[j] == 0) cnt++;
                else break;
            }
            if(cnt > 3) return false;
            i += cnt - 1;
        }
    }
    
    return true;
}

int main() {
    cin >> n;
    for(int i = 1; i <= n; i++) a[i] = 0;
    ok = 1;
    while(ok) {
        if(check()) {
            for(int i = 1; i <= n; i++) {
                if(a[i] == 0) cout << "6";
                else cout << "8";
            }
            cout << endl;
        }
        Sinh();
    }
}