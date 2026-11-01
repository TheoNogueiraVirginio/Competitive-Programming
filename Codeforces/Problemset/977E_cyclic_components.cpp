#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef vector<vector<int>> vvi;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

bool is_cyclic(vvi &graph, vi &visited, int current, int parent) {
    if (visited[current] != -1) return true;
    if (graph[current].size() != 2) return false;

    visited[current] = 1;

    bool ans = true;

    for (int no : graph[current]) {
        if (no != parent) {
            ans &= is_cyclic(graph, visited, no, current);
        }
    }

    return ans;
}

void solve() {
    int n, m; cin >> n >> m;

    vvi graph(n+1);
    for (int i=0; i<m; i++) {
        int u, v; cin >> u >> v;

        graph[u].PB(v);
        graph[v].PB(u);
    }

    vi visited(n+1, -1);

    int ans = 0;

    for (int i=1; i<=n; i++) {
        if (visited[i] == -1) {
            if (is_cyclic(graph, visited, i, 0)) ans++;
        }
    }

    cout << ans << '\n';
}

int main() {
    fast;

    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}