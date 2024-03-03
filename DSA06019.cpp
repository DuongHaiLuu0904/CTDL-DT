#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int, int> a, pair<int, int> b) {
    if(a.second == b.second) return a.first < b.first;
    return a.second > b.second;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        map<int, int> mp;
        vector<pair<int, int>> ve;
        for(auto &x : a) {
            cin >> x;
            mp[x]++;
        }
        for(auto x : mp) {
            for(int i = 0; i < x.second; i++)
                ve.push_back(make_pair(x.first, x.second));
        }
        sort(ve.begin(), ve.end(), cmp);
        for(auto x : ve) {
            cout << x.first << " ";
        }
        cout << endl;
    }
}