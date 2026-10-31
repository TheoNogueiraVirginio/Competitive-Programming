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

int trace_blames(const vi &blames, int start, int n) {
    vector<bool> visited(n+1, false);

    int current = start;

    while (!visited[current]) {
        visited[current] = true;
        current = blames[current];
    }

    return current;
}

void solve() {
    int n; cin >> n;

    vi blames(n+1);
    for (int i=1; i<=n; i++) cin >> blames[i];

    for (int i=1; i<=n; i++) {
        cout << trace_blames(blames, i, n) << (i==n ? '\n' : ' ');
    }
}

int main() {
    fast;

    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}