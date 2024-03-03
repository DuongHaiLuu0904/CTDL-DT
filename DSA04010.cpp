// DÃY CON LIÊN TIẾP CÓ TỔNG LỚN NHẤT

#include <bits/stdc++.h>
using namespace std;

int x, y, z;

int max_left(int a[], int i, int j) {
    int maxsum = 0;
    int sum = 0;
    for(int k = j; k >= i; k--) {
        sum += a[k];
        if(sum > maxsum) {
            maxsum = sum;
            x = k;
        }
    }
    return maxsum;
}

int max_right(int a[], int i, int j) {
    int maxsum = 0;
    int sum = 0;
    for(int k = i; k <= j; k++) {
        sum += a[k];
        if(sum > maxsum) {
            maxsum = sum;
            y = k;
        }
    }
    return maxsum;
}

int max_sub(int a[], int i, int j) {
    if(i == j) return a[i];
    int m = (i + j) / 2;
    int wl = max_sub(a, i, m);
    int wr = max_sub(a, m + 1, j);
    int wm = max_left(a, i, m) + max_right(a, m + 1, j);
    if(wl > wr) z = x;
    else z = y;
    int b = max(max(wl, wr), wm);
    return b;
}

int main() {
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int a[n];
        for(auto &x : a) cin >> x;
        int sum = max_sub (a, 0, n-1);
        cout << sum << endl;
    }
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int t; cin >> t;
//     while(t--) {
//         int n; cin >> n;
//         int a[n];
//         for(int &x : a) cin >> x;

//         int sum = 0, cnt = 0;
//         for(int i = 0; i < n; i++) {
//             sum = max(a[i], sum + a[i]);
//             cnt = max(cnt, sum);
//         }
//         cout << cnt << endl;
//     }
// }

void in() {
    in();
}