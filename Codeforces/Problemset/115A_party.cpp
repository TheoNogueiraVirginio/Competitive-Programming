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

int dfs(vvi &tree, int current) {    
    int height = 0;

    for (int child : tree[current]) {
        height = max(height, dfs(tree, child));
    }

    return 1 + height;
}

void solve() {
    int n; cin >> n;

    vvi tree(n+1);
    vi starts;

    for (int i=1; i<=n; i++) {
        int p; cin >> p;

        if (p == -1) starts.PB(i);
        else tree[p].PB(i);
    }

    int ans = 0;
    for (int start : starts) {
        ans = max(ans, dfs(tree, start));
    }

    cout << ans << '\n';
}

int main() {
    fast;

    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}