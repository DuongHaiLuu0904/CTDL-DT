// ĐẾM SỐ DẤU NGOẶC ĐỔI CHIỀU

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    string s; cin >> s;
    stack<char> st;
    
    for(int i = 0; i < s.size(); i++) {
        if(s[i] == ')' && st.size()) {
            if(st.top() == '(') st.pop();
            else st.push(s[i]);
        }
        else st.push(s[i]);
    }

    int k = st.size(), n = 0;
    while(st.size() && st.top() == '(') {
        st.pop();
        n++;
    }

    cout << (k / 2 + n % 2) << endl;
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}

// 4
// ))((
// ((((
// (((())
// )(())(((