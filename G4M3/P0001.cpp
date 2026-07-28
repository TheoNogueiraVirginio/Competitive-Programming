#include <bits/stdc++.h>
using namespace std;

int main() {
    int p, m, mp;
    cin >> p >> m >> mp;

    if (m < p * mp) {
        cout << "SIM" << endl;
    } else {
        cout << "NAO" << endl;
    }

    return 0;
}