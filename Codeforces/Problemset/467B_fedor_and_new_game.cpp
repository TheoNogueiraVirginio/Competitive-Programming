#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, m, k;
    cin >> n >> m >> k;

    vector<int> armies;

    for (int i=0; i<m+1; i++) {
        int x; cin >> x;
        armies.push_back(x);
    }

    int fedors_army = armies[m];
    int counter_friends = 0;

    for (int i=0; i<m; i++) {
        int common_army = (fedors_army ^ armies[i]);
       
        if (__builtin_popcount(common_army) <= k) {
            counter_friends++;
        }
    }

    cout << counter_friends << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}