// KÝ TỰ THỨ K TRONG XÂU

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        int cnt = 0;
        while(k % 2 == 0) {
            k /= 2;
            cnt++;
        }
        char s = 'A' + cnt;
        cout << s << endl;
    }
}