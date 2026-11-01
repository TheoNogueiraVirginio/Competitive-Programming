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
    int n, x; cin >> n >> x;

    int odd = 0;
    int even = 0;

    for (int i=0; i<n; i++) {
        int num; cin >> num;

        if (num & 1) odd++;
        else even++;
    }

    int max_odd = (odd&1 ? odd : odd-1);
    max_odd = min(max_odd, x);

    for (int qtd_odd=1; qtd_odd<=max_odd; qtd_odd+=2) {
        if (even >= x - qtd_odd) {
            cout << "Yes\n";
            return;
        }
    }

    cout << "No\n";
}

int main() {
    fast;

    int t = 1; cin >> t;
    while (t--) solve();

    return 0;
}