#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,e;
    cin >> n >> e;

    int soma = 0;
    for (int i=0; i<n; i++) {
        int m; cin >> m;
        soma += m;
    }

    if (soma >= e) {
        cout << "NADA PREOCUPANTE" << endl;
    } else if (soma >= e-5){
        cout << "POUCO PREOCUPANTE" << endl;
    } else {
        cout << "MUITO PREOCUPANTE" << endl;
    }

    return 0;
}