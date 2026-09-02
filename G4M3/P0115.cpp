#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; cin >> n;
    bool seen[1001] = {false};
    vector<int> numbers;

    for (int i=0; i<n; i++) {
        int f; cin >> f;

        if (!seen[f]) {
            seen[f] = true;
            numbers.push_back(f);
        } else {
            for (int j=0; j<numbers.size(); j++) {
                cout << numbers[j] << (j==numbers.size()-1 ? '\n' : ' ');
            }
        }
    }

}

int main() {
    fast;
    solve();

    return 0;
}