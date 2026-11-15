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
    ll n; cin >> n;

    ll st = n * (n + 1) / 2;

    ll sp = 0;
    ll p = 1;

    while (p <= n) {
        sp += p;
        p <<= 1;
    }

    ll ans = st - 2*sp;

    cout << ans << "\n";
}

int main() {
    fast;

    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}