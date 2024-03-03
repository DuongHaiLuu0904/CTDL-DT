// Nhầm chữ số

#include <bits/stdc++.h>
using namespace std;

int Min(int a) {
    string s1 = to_string(a);
    for(auto &x : s1) {
        if(x == '6') x = '5';
    }
    return stoi(s1);
}
int Max(int a) {
    string s1 = to_string(a);
    for(auto &x : s1) {
        if(x == '5') x = '6';
    }
    return stoi(s1);
}

int main() {
    int a, b; cin >> a >> b;
    cout << Min(a) + Min(b) << " " << Max(a) + Max(b) << endl;
}