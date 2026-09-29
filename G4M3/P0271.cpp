#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n; cin >> n;

    vector<vll> prefix_grid(n+1, vll(n+1));

    for (int i=1; i<=n; i++) {
        for (int j=1; j<=n; j++) {
            int v; cin >> v;
            prefix_grid[i][j] = v
                              + prefix_grid[i-1][j]
                              + prefix_grid[i][j-1]
                              - prefix_grid[i-1][j-1];
        }
    }

    int q; cin >> q;

    for (int i=0; i<q; i++) {
        int l, c;
        cin >> l >> c;

        cout << prefix_grid[l][c] << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}