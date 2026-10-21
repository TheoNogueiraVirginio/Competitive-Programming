#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    int n, q; cin >> n >> q;

    vector<int> planets_pos[(int)1e4];
    for (int i=0; i<n; i++) {
        int e; cin >> e;
        planets_pos[e].PB(i);
    }

    map<pair<int,int>, int> memo;

    for (int i=0; i<q; i++) {
        int a, b; cin >> a >> b;

        if (memo.count({a, b})) {
            cout << memo[{a, b}] << '\n';
            continue;
        }

        const auto &positions_a = planets_pos[a];

        int ans = 0;

        for (int pos_a : positions_a) {
            auto it = lower_bound(all(planets_pos[b]), pos_a);

            int pos_b;
            if (it != planets_pos[b].begin()) pos_b = *(it-1) +n;
            else pos_b = planets_pos[b].back();

            ans = max(ans, min(n, abs(pos_b - pos_a) +1));
        }

        memo[{a, b}] = ans;
        cout << ans << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}