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
    int a, b;
    cin >> a >> b;

    ll ans = lcm(a,b);
    
    cout << ans << '\n';
}

int main() {
    fast;

    int t; cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}