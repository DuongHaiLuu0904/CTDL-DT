// SỐ LỘC PHÁT 3

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    int n; cin >> n;
    queue<string> qu;
    stack<string> st;
    qu.push("");
    while(true) {
        string top = qu.front();
        qu.pop();

        if(top.size() == n + 1) break;

        st.push(top);
        qu.push(top + "6");
        qu.push(top + "8");
    }
    cout << st.size() - 1 << endl;
    while(st.size()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}