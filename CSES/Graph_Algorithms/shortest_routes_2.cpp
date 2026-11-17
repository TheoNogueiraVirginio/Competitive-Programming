#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<vector<int>> vvi;
typedef vector<long long> vll;
typedef pair<int,int> pi;
typedef pair<ll,ll> pll;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

vector<vll> dist;

void solve() {
    ll n, m, q; cin >> n >> m >> q;

    dist.assign(n+1, vll(n+1, 1e18));
    
    for (int i = 1; i <= n; i++)
        dist[i][i] = 0; 

    for (int i=1; i<=m; i++) {
        ll u, v, c; cin >> u >> v >> c;

        dist[u][v] = min(dist[u][v], c);
        dist[v][u] = min(dist[v][u], c);
    }
 
    for (int k=1; k<=n; k++) {
        for (int u=1; u<=n; u++) {
            for (int v=1; v<=n; v++) {
                dist[u][v] = min(dist[u][v], (dist[u][k] + dist[k][v]));
            }
        }
    }

    for (int i=0; i<q; i++) {
        ll u, v; cin >> u >> v;

        cout << (dist[u][v]==1e18 ? -1 : dist[u][v]) << '\n';
    }
}

int main() {
    fast;

    int t=1; //cin >> t;
    while(t--) solve();

    return 0;
}