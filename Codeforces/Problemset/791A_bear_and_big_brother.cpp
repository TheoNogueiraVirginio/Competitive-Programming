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
    ll a, b; cin >> a >> b;

    int y = 0;
    while (a <= b) {
        a *= 3;
        b <<= 1;

        y++;
    }

    cout << y << '\n';
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}