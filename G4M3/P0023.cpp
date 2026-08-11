#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    vector<int> x_p(3);
    vector<int> y_p(3);

    for (int i=0; i<3; i++) {
        int x,y;
        cin >> x >> y;

        x_p[i] = x;
        y_p[i] = y;
    }

    cout << (x_p[0] ^ x_p[1] ^ x_p[2]) << " " << (y_p[0] ^ y_p[1] ^ y_p[2]) << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}