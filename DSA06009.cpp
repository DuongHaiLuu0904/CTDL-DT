#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        int n, k; cin >> n >> k;
        map<int, int> mp;
        while(n--) {
            int x; cin >> x;
            mp[x]++;
        }
        int sum = 0;
        for(auto x : mp) {
            if(x.first * 2 == k) {
                sum += x.second * (x.second - 1);
            }
            else {
                sum += x.second * mp[k - x.first];
            }
        }
        cout << sum / 2 << endl;
    }
}