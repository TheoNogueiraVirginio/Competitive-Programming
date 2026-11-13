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
vector<vll> dist;

using State = tuple<ll,ll,int>;

void dijk(int o) {
    priority_queue< State, vector<State>, greater<State> > pq;

    pq.push({0, o, 0});
    dist[o][0] = 0;

    while (!pq.empty()) {
        auto [c, u, used] = pq.top(); pq.pop();

        if (c > dist[u][used]) continue;

        for (auto [v, cu] : G[u]) {
            if (c+cu < dist[v][used]) {
                dist[v][used] = c+cu;
                pq.push({c+cu, v, used});
            }

            if (used == 0) { // desencadeia cenário de uso de cupom
                if (c+ (cu>>1) >= dist[v][1]) continue;

                dist[v][1] = c + (cu>>1);
                pq.push({dist[v][1], v, 1});
            }
        }
    }
}

void solve() {
    ll n, m; cin >> n >> m;
    
    G.assign(n+1, {});
    dist.assign(n+1, vll(2, LLONG_MAX));

    for (int i=0; i<m; i++) {
        ll u, v, c; cin >> u >> v >> c;

        G[u].PB({v, c});
    }

    dijk(1);

    cout << min(dist[n][0], dist[n][1]) << '\n';
}

int main() {
    fast;

    int t=1; //cin >> t;
    while(t--) solve();

    return 0;
}