// DÃY XÂU FIBONACI
 
#include <bits/stdc++.h>
using namespace std;

long long F[95];

void Fibo() {
    F[1] = F[2] = 1;
    for(int i = 3; i < 95; i++) {
        F[i] = F[i - 2] + F[i - 1];
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
        if(n == 1) cout << "A" << endl;
        else cout << "B" << endl;
    }
}