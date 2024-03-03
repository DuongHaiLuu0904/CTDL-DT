// CẶP SỐ CÓ TỔNG BẰNG K

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    while(t--) {
        long long n, k; cin >> n >> k;
        map<long long, long long> mp;
        while(n--) {
            long long x; cin >> x;
            mp[x]++;
        }
        long long sum = 0;
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
