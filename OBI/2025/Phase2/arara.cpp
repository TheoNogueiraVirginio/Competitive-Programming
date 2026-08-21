#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n,m;
    cin >> n >> m;

    cout << (m >= n + 4*(n-1) ? "S\n" : "Y\n");
}

int main() {
    fast;
    solve();

    return 0;
}