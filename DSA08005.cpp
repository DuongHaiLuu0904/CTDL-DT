// SỐ NHỊ PHÂN TỪ 1 ĐẾN N

#include <bits/stdc++.h>
using namespace std;

vector<string> ve;

void Tao() {
    queue<string> qu;
    qu.push("1");
    ve.push_back("1");
    while(ve.size() <= 10000) {
        string top = qu.front();
        qu.pop();
        ve.push_back(top + "0");
        ve.push_back(top + "1");
        qu.push(top + "0");
        qu.push(top + "1");
    }
}

int main() {
    Tao();
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        for(int i = 0; i < n; i++) {
            cout << ve[i] << " ";
        }
        cout << endl;
    }
}