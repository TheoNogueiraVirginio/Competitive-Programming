#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    vector<int> numbers(5);

    for (int i=0; i<5; i++) {
        int x; cin >> x;
        numbers[i] = x;
    }

    int lower = *min_element(numbers.begin(), numbers.end());
    int total_sum = accumulate(numbers.begin(), numbers.end(), 0);

    cout << total_sum - (5*lower) << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}