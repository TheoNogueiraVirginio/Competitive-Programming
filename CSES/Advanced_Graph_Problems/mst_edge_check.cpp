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

using E = tuple<ll, ll, ll, int>;

vll id, sz;

ll find(ll x) {
    return id[x] = (id[x]==x ? x : find(id[x]));
}

void uni(ll x, ll y) {
    x = find(x);  y = find(y);

    if (x == y) return;
    if (sz[x] > sz[y]) swap(x, y);

    id[x] = y;
    sz[y] += sz[x];
}

void solve() {
    ll n, m; cin >> n >> m;

    vector<E> el;
    id = vll(n+1, 0); iota(all(id), 0);
    sz = vll(n+1, 1);

    for (int i=0; i<m; i++) {
        ll u, v, c; cin >> u >> v >> c;

        el.emplace_back(E{c, u,v, i});
    }
    sort(all(el));

    vector<bool> da(m, false);

    for (int l=0; l<m;) {
        int r = l;
        while (r < m && get<0>(el[r]) == get<0>(el[l])) {
            r++;
        }

        for (int i=l; i<r; i++) {
            auto [c, u,v, idx] = el[i];
            if (find(u) == find(v)) continue;
            da[idx] = true;
        }

        for (int i=l; i<r; i++) {
            auto [c, u,v, idx] = el[i];
            if (find(u) == find(v)) continue;
            
            uni(u, v);
        }

        l = r;
    }

    for (int i=0; i<m; i++) cout << (da[i] ? "YES\n" : "NO\n");
}

int main() {
    fast;

    int t=1; //cin >> t;
    while(t--) solve();

    return 0;
}