#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int n, counter=0;

    for (int i=0; i<100; i++) {
        int sum=0;

        for (int j=0; j<5; j++) {
            int grade; cin >> grade;
            sum += grade;
        }

        if (sum >= 3500) {
            counter++;
        }
    }

    cout << counter << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}