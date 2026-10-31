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

ll dfs(vvi &graph, vi &visited, vll &gold, int current) {
    visited[current] = 1;
    ll min_gold = gold[current];

    for (int no : graph[current]) {
        if (visited[no] == -1) {
            min_gold = min(min_gold, dfs(graph, visited, gold, no));
        }
    }

    return min_gold;
}

void solve() {
    int n, m; cin >> n >> m;

    vvi graph(n+1);
    vll gold(n+1);

    for (int i=1; i<=n; i++) cin >> gold[i];

    for (int i=0; i<m; i++) {
        int x, y; cin >> x >> y;

        graph[x].PB(y);
        graph[y].PB(x);
    }

    vi visited(n+1, -1);
    ll ans = 0;

    for (int i=1; i<=n; i++) {
        if (visited[i] == -1) {
            ans += dfs(graph, visited, gold, i);
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