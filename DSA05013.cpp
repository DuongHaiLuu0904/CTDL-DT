// BẬC THANG

#include <bits/stdc++.h>
using namespace std;

int m = 1e9 + 7;

int tinh(int n, int k) {
    int f[100005] = {0};
    f[0] = f[1] = 1;
    for(int i = 2; i <= n; i++) {
        for(int j = i; j <= min(i, k); j++) {
            f[i] = (f[i] + f[i - j]) % m;
        }
    }
}

int main() {

}