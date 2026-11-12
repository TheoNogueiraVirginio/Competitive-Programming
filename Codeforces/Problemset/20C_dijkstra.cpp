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
vll dist;
vll parent;

void dijk(int o) {
    priority_queue<pll, vector<pll>, greater<pll>> pq;

    pq.push({0,o});
    dist[o] = 0;

    while (!pq.empty()) {
        auto [c, v] = pq.top(); pq.pop();

        if (dist[v] < c) continue;

        for (auto [no, cu] : G[v]) {
            if (c+cu >= dist[no]) continue;

            pq.push({c+cu, no});
            dist[no] = c+cu;
            parent[no] = v;
        }
    }
}

void solve() {
    int n, m; cin >> n >> m;

    G.assign(n+1, {});
    dist.assign(n+1, LLONG_MAX);
    parent.assign(n+1, -1);

    for (int i=0; i<m; i++) {
        ll u, v, c; cin >> u >> v >> c;

        G[u].PB({v, c});
        G[v].PB({u, c});
    }

    dijk(1);
    
    if (dist[n] == LLONG_MAX) {
        cout << "-1\n";
        return;
    }

    vi ans;
    for (int curr = n; curr != -1; curr = parent[curr]) ans.PB(curr);

    reverse(all(ans));
    for (int i=0; i<ans.size(); i++) {
        cout << ans[i] << (i==ans.size()-1 ? '\n' : ' ');
    }
}

int main() {
    fast;

    int t=1; //cin >> t;
    while(t--) solve();

    return 0;
}