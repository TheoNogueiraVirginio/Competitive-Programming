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

void solve() {
    int w; cin >> w;

    if (w == 2) {
        cout << "NO\n";
        return;
    }

    cout << (w&1 ? "NO\n" : "YES\n");
}

int main() {
    ios_base::sync_with_stdio(false); 
    cin.tie(nullptr);

    int t=1; //cin >> t;
    while(t--) solve();

    return 0;
}