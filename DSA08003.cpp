// HÀNG ĐỢI HAI ĐẦU (DEQUEUE)

#include <bits/stdc++.h>
using namespace std;

int main() {
    int t; cin >> t;
    deque<int> de;
    while(t--) {
        string s; cin >> s;
        if(s == "PUSHFRONT") {
            int x; cin >> x;
            de.push_front(x);
        }
        else if(s == "PRINTFRONT") {
            if(de.size()) cout << de.front() << endl;
            else cout << "NONE" << endl;
        }
        else if(s == "POPFRONT") {
            if(de.size()) de.pop_front();
        }
        else if(s == "PUSHBACK") {
            int x; cin >> x;
            de.push_back(x);
        }
        else if(s == "PRINTBACK") {
            if(de.size()) cout << de.back() << endl;
            else cout << "NONE" << endl;
        }
        else {
            if(de.size()) de.pop_back();
        }
    }
}