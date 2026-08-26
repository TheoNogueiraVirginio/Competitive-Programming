#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;

    vector<int> numbers(n);
    for (int i=0; i<n; i++) {
        cin >> numbers[i];
    }

    sort(numbers.begin(), numbers.end());

    if (n==1) {
        cout << "TRUE\n";
        return;
    }

    int common_dif = numbers[1] - numbers[0];
    for (int i=2; i<n; i++) {
        if (numbers[i] - numbers[i-1] != common_dif) {
            cout << "FALSE\n";
            return;
        }
    }
    cout << "TRUE\n";
}

int main() {
    fast;
    solve();

    return 0;
}