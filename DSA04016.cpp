// PHẦN TỬ THỨ K

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int m, n, k; cin >> n >> m >> k;
        vector<int> ve;
        for(int i = 0; i < n + m; i++) {
            int x;  cin >> x;
            ve.push_back(x);
        }
        sort(ve.begin(), ve.end());
        cout << ve[k - 1] << endl;
    }
}