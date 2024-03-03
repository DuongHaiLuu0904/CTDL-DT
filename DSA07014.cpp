// TÍNH GIÁ TRỊ BIỂU THỨC TIỀN TỐ

#include <bits/stdc++.h>
using namespace std;

int check(int x, char k, int y) {
    if(k == '+') return x + y;
    if(k == '-') return x - y;
    if(k == '*') return x * y;
    if(k == '/') return x / y;
    return 0;
}

void Testcase() {
    string s; cin >> s; int n = s.size();
    stack<int> st;
    for(int i = n - 1; i >= 0; i--) {
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            int x = st.top(); st.pop();
            int y = st.top(); st.pop();
            int tmp = check(x, s[i], y);
            st.push(tmp);
        }
        else st.push(s[i] - '0');
    }
    cout << st.top() << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}