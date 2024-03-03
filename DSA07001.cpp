#include <bits/stdc++.h>
using namespace std;

// push
// pop
// top
// size
// empty

int main() {
    string s;
    stack<int> st;
    while(cin >> s) {
        int n;
        if(s == "push") {
            cin >> n;
            st.push(n);
        }
        else if( s == "pop") {
            st.pop();
        }
        else {
            if(!st.empty()) {
                stack<int> a;
                while(!st.empty()) {
                    a.push(st.top());
                    st.pop();
                }
                while(!a.empty()) {
                    cout << a.top() << " ";
                    st.push(a.top());
                    a.pop();
                }
                cout << endl;
            }
            else cout << "empty" << endl;
        }
    }
}
