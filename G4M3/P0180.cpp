#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n; 
    cin >> n;

    vector<int> hours(n);
    for (int i=0; i<n; i++) {
        cin >> hours[i];
    }

    int paul_hours = hours.back();

    for (int i=0; i<n-1; i++) {
        if (hours[i] > paul_hours) {
            cout << hours[i] << '\n';
        }
    }
}

int main() {
    fast;
    solve();

    return 0;
}