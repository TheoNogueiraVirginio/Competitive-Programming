#include <bits/stdc++.h>
using namespace std;

int main() {
    int p; cin >> p;

    int f,m,g;
    int mr=0,gr=0;

    while(true) {
        cin >> f >> m >> g;

        if (f==0 && m==0 && g==0) break;

        if (f > p) {
            mr += m;
            gr += g;
        }

        cout << "Meloes roubados: " << mr << endl;
        cout << "Goblins resgatados: " << gr << endl;
        cout << "---" << endl;
    }

    return 0;
}