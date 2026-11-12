#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vll;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

vvi G;
vi cats;
int m;

ll dfs(int c, int p, int fo) {
    fo = (cats[c]==1 ? fo+1 : 0);

    if (fo > m) return 0; 
    if (c != 1 && G[c].size() == 1) return 1;

    ll ans = 0;
    for (int f : G[c]) {
        if (f == p) continue;
        ans += dfs(f, c, fo);
    }

    return ans;
}

void solve() {
    int n; cin >> n >> m;

    G.assign(n+1, vi());
    cats.assign(n+1, -1);

    for (int i=1; i<=n; i++) cin >> cats[i];

    for (int i=1; i<n; i++) {
        int u, v; cin >> u >> v;

        G[u].PB(v);
        G[v].PB(u);
    }

    ll ans = dfs(1, 0, 0);

    cout << ans << '\n';
}

int main() {
    fast;

    int t=1; //cin >> t;
    while(t--) solve();

    return 0;
}