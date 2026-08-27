#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m;
    cin >> n >> m;

    vector<string> grid(n);

    for (int i=0; i<n; i++) {
        cin >> grid[i];
    }

    for (int col=0; col<m; col++) {
        for (int row=0; row<n; row++) {
            cout << grid[row][col];
        }
        cout << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}