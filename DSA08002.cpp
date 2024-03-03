// CẤU TRÚC DỮ LIỆU HÀNG ĐỢI 2

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    queue<int> qu;
    while(t--) {
        string s; cin >> s;
        if(s == "PUSH") {
            int x; cin >> x;
            qu.push(x);
        }
        else if(s == "PRINTFRONT") {
            if(qu.size()) 
                cout << qu.front() << endl;
            else 
                cout << "NONE" << endl;
        }
        else if(s == "POP") {
            if(qu.size()) qu.pop();
        }
    }
}

// 9
// PUSH 1
// PUSH 2
// POP
// PRINTFRONT
// PUSH 3
// PRINTFRONT
// POP
// POP
// PRINTFRONT