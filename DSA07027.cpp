// PHẦN TỬ BÊN PHẢI ĐẦU TIÊN LỚN HƠN

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    int n; cin >> n;
    int a[n], res[n];
    for(auto &x : a) cin >> x;
    stack<int> st;
    for(int i = n - 1; i >= 0; i--) {
        while(st.size() && st.top() <= a[i]) {
            st.pop();
        }
        if(st.empty()) res[i] = -1;
        else res[i] = st.top();
        st.push(a[i]);
    }
    for(auto x : res) cout << x << " ";
    cout << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}