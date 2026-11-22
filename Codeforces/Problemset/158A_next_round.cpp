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

void solve() {
    int n, k; cin >> n >> k;

    vi a(n);
    int choosed = -1;
    for (int i=0; i<n; i++) {
        cin >> a[i];
        if (i==k-1) choosed = a[i];
    }

    int ans = 0;
    for (int i=0; i<n; i++) if (a[i] >= choosed && a[i]>0) ans++;

    cout << ans << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}