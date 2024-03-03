// SỐ BDN 2

#include <bits/stdc++.h>
using namespace std;

#define ll long long 

bool check(string s, int n) {
    int sum = 0;
    for(int i = 0; i < s.size(); i++) {
        sum = (sum * 10 + (s[i] - '0')) % n;
    }
    return (sum == 0);
}

void Testcase() {
    int n; cin >> n;
    queue<string> qu;
    qu.push("1");
    while(true) {
        string top = qu.front();
        qu.pop();

        if(check(top, n)) {
            cout << top << endl;
            return;
        }

        qu.push(top + "0");
        qu.push(top + "1");
    }
}

int main() {
    int t; cin >> t;
    while(t--) Testcase();
}