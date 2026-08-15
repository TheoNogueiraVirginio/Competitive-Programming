#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    vector<long long> weights;
    long long total_sum = 0;

    for (int i=0; i<n; i++) {
        long long p; cin >> p;
        weights.push_back(p);
        total_sum += p;
    }

    long long lower_dif = LLONG_MAX;
    for (int mask=0; mask<=(1U<<n)-1; mask++) {
        long long group2 =0;

        for (int i=0; i<n; i++) {
            if (mask & (1U << i)) {
                group2 += weights[i];
            }
        }
        long long group1 = total_sum - group2;
        lower_dif = min(lower_dif, abs(group1 - group2));
    }
    cout << lower_dif << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}