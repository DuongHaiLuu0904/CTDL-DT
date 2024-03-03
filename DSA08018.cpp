// SỐ LỘC PHÁT 2

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    int n; cin >> n;
    queue<string> qu;
    vector<string> ve;
    qu.push("");
    while(true) {
        string top = qu.front();
        qu.pop();

        if(top.size() == n + 1) break;

        ve.push_back(top);
        qu.push(top + "6");
        qu.push(top + "8");
    }
    ve.erase(ve.begin());
    cout << ve.size() << endl;
    for(auto x : ve) cout << x << " ";
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}