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

const ll LLINF = LLONG_MAX;

vector<vector<pair<int,ll>>> G;
vll dist;

void dijk(int o) {
    priority_queue<pair<ll,int>> pq;

    pq.push({0,o});
    dist[o] = 0;

    while (!pq.empty()) {
        auto [c, v] = pq.top(); pq.pop();
        c *= -1;

        if (c > dist[v]) continue;
       
        for (auto [no, cu] : G[v]) {
            if (c + cu >= dist[no]) continue;
            dist[no] = c+cu;
            pq.push({-dist[no], no});
        }
    }
}

void solve() {
    int n, m; cin >> n >> m;

    G.assign(n+1, {});
    dist.assign(n+1, LLINF);

    for (int i=0; i<m; i++) {
        int u, v;
        ll c;
        cin >> u >> v >> c;

        G[u].PB({v, c});
    }

    dijk(1);

    for (int i=1; i<=n; i++) {
        cout << dist[i] << (i==n ? '\n' : ' ');
    }
}

int main() {
    fast;

    int t=1; //cin >> t;
    while(t--) solve();

    return 0;
}