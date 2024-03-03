// KIỂM TRA BIỂU THỨC SỐ HỌC

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    string s; getline(cin, s);
    stack<char> st;
    bool check = false;
    int n = s.size();
    for(int i = 0; i < n; i++) {
        if(s[i] == '(' || s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/') {
            st.push(s[i]);
        }
        if(s[i] == ')') {
            if(st.top() == '(') {
                check = true;
                break;
            }
            while(st.size() && st.top() != '(') {
                st.pop();
            }
            st.pop();
        }
    }
    if(check) cout << "Yes" << endl;
    else cout << "No" << endl;
}

int main() {
    int t; cin >> t;
    cin.ignore();
    while(t--) Testcase();
}

// 3
// ((a+b))
// (a + (b)/c)
// (a + b*(c-d))