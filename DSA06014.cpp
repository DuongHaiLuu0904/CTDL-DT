#include <bits/stdc++.h>
using namespace std;

const int M = 1e6 + 1;
int prime[M];
void eratost() {
    for(int i = 0; i < M; i++) prime[i] = 1;
    prime[0] = prime[1] = 0;
    for(int i = 2; i <= sqrt(M); i++) {
        if(prime[i]) {
            for(int j = i * i; j < M; j += i) {
                prime[j] = 0;
            }
        }
    }
}

int main() {
    eratost();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int ok = 0;
        for(int i = 2; i <= n / 2; i++) {
            if(prime[i] && prime[n - i]) {
                cout << i << " " << n - i << endl;
                ok = 1;
                break;
            }
        }
        if(!ok) cout << "-1" << endl;
    }
}