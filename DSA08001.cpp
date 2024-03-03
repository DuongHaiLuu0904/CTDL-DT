// CẤU TRÚC DỮ LIỆU HÀNG ĐỢI 1

#include <bits/stdc++.h>
using namespace std;

void Testcase() {
    deque<int> de;
    int n, x; cin >> n;
    while(n--) {
        cin >> x;
        if(x == 1) {
            cout << de.size() << endl;
        }
        else if(x == 2) {
            if(de.empty()) 
                cout << "YES" << endl;
            else 
                cout << "NO" << endl;
        }
        else if(x == 3) {
            int k; cin >> k;
            de.push_back(k);
        }
        else if(x == 4) {
            if(de.size()) 
                de.pop_front();
        }
        else if(x == 5) {
            if(de.size()) 
                cout << de.front() << endl;
            else 
                cout << "-1" << endl;
        }
        else {
            if(de.size())   
                cout << de.back() << endl;
            else 
                cout << "-1" << endl;
        }
    }
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}