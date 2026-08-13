#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;

    int start = (n&1) ? n : n+1;

    for (int i=start; i<=2*n; i+=2) {
        cout << i << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}