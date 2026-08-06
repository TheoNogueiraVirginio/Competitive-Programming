#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;

    cout << n << '\n';
    while (n != 1) {
        if (!(n & 1)) {
            n >>= 1;
        } else {
            n = n*3 +1;
        }

        cout << n << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}