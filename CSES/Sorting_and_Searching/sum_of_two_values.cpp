#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, x;
    cin >> n >> x;

    vector<pair<int,int>> numbers(n);
    for (int i=0; i<n; i++) {
        cin >> numbers[i].first;
        numbers[i].second = i + 1;
    }

    sort(numbers.begin(), numbers.end());

    int left=0, right=n-1;

    while (left < right) {
        long long sum = numbers[left].first + numbers[right].first;

        if (sum == x) {
            cout << 0LL + numbers[left].second << " " << numbers[right].second << '\n';
            return;
        } else if (sum > x) {
            right--;
        } else {
            left++;
        }
    }

    cout << "IMPOSSIBLE\n";
}

int main() {
    fast;
    solve();

    return 0;
}