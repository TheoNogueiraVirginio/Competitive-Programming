#include <bits/stdc++.h>

using namespace std;
int main() {
    int v; cin >> v;

    cout << v << endl;
    
    cout << v/100 << " nota(s) de R$ 100,00" << endl;
    v %= 100;

    cout << v/50 << " nota(s) de R$ 50,00" << endl;
    v %= 50;

    cout << v/20 << " nota(s) de R$ 20,00" << endl;
    v %= 20;

    cout << v/10 << " nota(s) de R$ 10,00" << endl;
    v %= 10;

    cout << v/5 << " nota(s) de R$ 5,00" << endl;
    v %= 5;

    cout << v/2 << " nota(s) de R$ 2,00" << endl;
    v %= 2;

    cout << v << " nota(s) de R$ 1,00" << endl;

    return 0;
}