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

int bfs(int n, int m) {
    vi visited(10001, -1);
    visited[n] = 1;
    
    queue<pi> q;
    q.push({n, 0});

    while (q.size() > 0) {
        pi current = q.front();
        q.pop();

        if (current.F == m) return current.S;

        int next_value1 = current.F *2;
        int next_value2 = current.F -1;

        if ((next_value1 > 0 && next_value1 <= 10000) && visited[next_value1] == -1) {
            q.push({next_value1, current.S +1});
            visited[next_value1] = 1;
        }

        if ((next_value2 > 0 && next_value2 <= 10000) && visited[next_value2] == -1) {
            q.push({next_value2, current.S + 1});
            visited[next_value2] = 1;
        }

    }
}

void solve() {
    int n, m; cin >> n >> m;

    int ans = bfs(n, m);

    cout << ans << '\n';
}

int main() {
    fast;

    int t = 1; //cin >> t;
    while (t--) solve();

    return 0;
}