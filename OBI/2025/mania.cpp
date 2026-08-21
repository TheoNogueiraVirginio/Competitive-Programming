#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m;
    cin >> n >> m;

    vector<int> ans(2);
    vector<vector<int>> grid(n, vector<int>(m));
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            cin >> grid[i][j]; 
            ans[(i+j + grid[i][j]) &1]++;
        }
    }

    cout << min(ans[0], ans[1]) << '\n';
    int opt = (ans[0] > ans[1] ? 0 : 1);
    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            if (((i+j + grid[i][j])&1) != opt) grid[i][j]++;
            cout << grid[i][j] << (j==m-1 ? '\n' : ' ');
        }
    }
}

int main() {
    fast;
    solve();

    return 0;
}