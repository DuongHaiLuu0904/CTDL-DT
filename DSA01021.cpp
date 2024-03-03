#include <bits/stdc++.h>
using namespace std;
#define endl "\n"

int n, k, a[100], ok;

void Sinh() {
    int i = k;
    while(i > 0 && a[i] == n - k + i) {
        i--;
    }
    if(i == 0) ok = 0;
    else {
        a[i]++;
        for(int j = i + 1; j <= k; j++) {
            a[j] = a[j - 1] + 1;
        }
    }
}

void Testcase() {
    cin >> n >> k;
    ok = 1;
    map<int, int> mp;
    for(int i = 1; i <= k; i++) {
        cin >> a[i];
        mp[a[i]]++;
    }
    Sinh();
    if(ok == 0) {
        cout << k << endl;
    }
    else {
        int cnt = 0;
        for(int i = 1; i <= k; i++) {
            if(mp[a[i]] == 0) cnt++;
        }
        cout << cnt << endl;
    }
}

int main() {
    ios_base::sync_with_stdio(0); cin.tie(0);
    int t; cin >> t;
    while(t--) Testcase();
}