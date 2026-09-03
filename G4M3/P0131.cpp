#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;

    int min_price, max_profit=0;
    cin >> min_price;

    for (int i=0; i<n-1; i++) {
        int current_price; cin >> current_price;

        max_profit = max(max_profit, current_price-min_price);
        min_price = min(min_price, current_price);
    }
    cout << max_profit << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}