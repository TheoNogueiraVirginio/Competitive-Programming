#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    stack<pair<int,int>> lower_candidates;

    for (int i=0; i<n; i++) {
        int x; cin >> x;
        while (!lower_candidates.empty() && x <= lower_candidates.top().first) {
            lower_candidates.pop();
        }

        int ans = (!lower_candidates.empty() ? lower_candidates.top().second +1 : 0);
        cout << ans << (i==n-1 ? '\n' : ' ');

        lower_candidates.push({x,i});
    }
}

int main() {
    fast;
    solve();

    return 0;
}