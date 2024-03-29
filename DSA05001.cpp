#include <bits/stdc++.h>
using namespace std;

int c[1005][1005];

int Tao(string s1, string s2) {
    memset(c, 0, sizeof(c));
    int n = s1.size(), m = s2.size();
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {
            if(s1[i - 1] == s2[j - 1]) c[i][j] = c[i - 1][j - 1] + 1;
            else c[i][j] = max(c[i - 1][j], c[i][j - 1]);
        }
    }
    return c[n][m];
}

int main() {
    int t; cin >> t;
    while(t--) {
        string s1, s2; cin >> s1 >> s2;
        cout << Tao(s1, s2) << endl;
    }
}