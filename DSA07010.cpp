// BIẾN ĐỐI TIỀN TỐ - HẬU TỐ

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    string s; cin >> s;
    stack<string> st;
    for(int i = s.size() - 1; i >= 0; i--) {
        if(s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^') {
            string x = st.top(); st.pop();
            string y = st.top(); st.pop();
            string tmp = x + y + s[i];
            st.push(tmp);
        }
        else st.push(string(1, s[i]));
    }
    cout << st.top() << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}