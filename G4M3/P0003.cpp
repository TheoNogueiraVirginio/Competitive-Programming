#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,r;
    cin >> n >> r;

    for (int i=0; i<n; i++) {
        int s; cin >> s;

        if (s <= r) {
            cout << "1" << endl;
        } else {
            cout << "0" << endl;
        }
    }

    return 0;
}