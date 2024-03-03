// CÁI TÚI

#include <bits/stdc++.h>
using namespace std;

int n, m;
int a[1005], b[1005];
int  F[1005][1005];

int Tao() {
    memset(F, 0, sizeof(F));
    for(int i  = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            F[i][j] = F[i - 1][j];
            if(j >= a[i]) {
                F[i][j] = max(F[i][j], F[i - 1][j - a[i]] + b[i]);
            }
        }
    }
    return F[n][m];
}

int main() {
    int t; cin >> t;
    while(t--) {
        cin >> n >> m;
        for(int i = 1; i <= n; i++) cin >> a[i];
        for(int i = 1; i <= m; i++) cin >> b[i];
        cout << Tao() << endl;
    }
}