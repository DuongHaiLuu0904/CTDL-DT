// DÃY XÂU NHỊ PHÂN

#include <bits/stdc++.h>
using namespace std;

long long F[100];
void Fibo() {
    F[1] = F[2] = 1;
    for(int i = 3; i < 95; i++) {
        F[i] = F[i - 1] + F[i - 2];
    }
}

int main() {
    Fibo();
    int t; cin >> t;
    while(t--) {
        long long n, k; cin >> n >> k;
        while(n > 2) {
            if(k <= F[n - 2]) n -= 2;
            else {
                k -= F[n - 2];
                n--;
            }
        }
        if(n == 1) cout << "0" << endl;
        else cout << "1" << endl;
    }
}