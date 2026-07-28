#include <bits/stdc++.h>
using namespace std;

int main() {
    int n; cin >> n;

    int total = 0;
    bool ativo = false;

    for (int i = 0; i < n; i++) {
        int v; cin >> v;

        if (v == 1 && !ativo) {
            total++;
        }
        
        ativo = (v == 1);
    }

    cout << total << endl;
    
    return 0;
}
