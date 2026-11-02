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

void solve() {
    int n, m; cin >> n >> m;

    vvi snowflake_graph(n+1);
    
    for (int i=1; i<=m; i++) {
        int u, v; cin >> u >> v;

        snowflake_graph[u].PB(v);
        snowflake_graph[v].PB(u);
    }

    map<int, int> degree_freq; // {degree, frequency}
    for (int i = 1; i <= n; i++) {
        degree_freq[snowflake_graph[i].size()]++;
    }

    int x, y;

    if (degree_freq.size() == 3) {
        // Distinct degrees for Center, Middle, and Leaves
        for (auto [degree, freq] : degree_freq) {
            if (degree == 1) continue; // Ignora as folhas
            
            if (freq == 1) x = degree;
            else y = degree - 1;
        }
    } else {
        // Same degree for Center and Middle nodes (x = y + 1)
        for (auto [degree, freq] : degree_freq) {
            if (degree == 1) continue; // Ignore leaves
            
            x = degree;
            y = degree - 1;
        }
    }

    cout << x << ' ' << y << '\n';
}

int main() {
    fast;

    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}