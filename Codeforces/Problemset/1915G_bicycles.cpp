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

vector<vector<pll>> G;
vll S;
vector<vll> dist;

using State = tuple<ll, ll, int>; // cost, city, bike

void dijk(int o) {
    priority_queue< State, vector<State>, greater<State> > pq;

    pq.push({0, o, S[o]});
    dist[o][S[o]] = 0;

    while (!pq.empty()) {
        auto [c, u, f] = pq.top(); pq.pop();

        if (c > dist[u][f]) continue;

        for (auto [v, cu] : G[u]) {
            ll cost = c + cu*f;
            int bb = (f<S[v] ? f : S[v]);

            if (cost >= dist[v][bb]) continue;

            pq.push({cost, v, bb});
            dist[v][bb] = cost;
        }
    }
}

void solve() {
    ll n, m; cin >> n >> m;

    G.assign(n+1, {});
    S.assign(n+1, -1);
    dist.assign(n+1, vll(1e3 +1, LLONG_MAX));

    for (int i=0; i<m; i++) {
        ll u, v, w; cin >> u >> v >> w;

        G[u].PB({v, w});
        G[v].PB({u, w});
    }

    for (int i=1; i<=n; i++) cin >> S[i];

    dijk(1);
    
    ll ans = LLONG_MAX;
    for (int i=1; i<=1e3; i++) ans = min(ans, dist[n][i]);

    cout << ans << '\n';
}

int main() {
    fast;

    int t=1; cin >> t;
    while(t--) solve();

    return 0;
}