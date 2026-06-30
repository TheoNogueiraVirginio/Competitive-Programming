#include <bits/stdc++.h>

using namespace std;
int main()
{
    double valor;
    cin >> valor;

    int v = round(valor * 100);

    cout << "NOTAS:" << endl;

    cout << v / 10000 << " nota(s) de R$ 100.00" << endl;
    v %= 10000;

    cout << v / 5000 << " nota(s) de R$ 50.00" << endl;
    v %= 5000;

    cout << v / 2000 << " nota(s) de R$ 20.00" << endl;
    v %= 2000;

    cout << v / 1000 << " nota(s) de R$ 10.00" << endl;
    v %= 1000;

    cout << v / 500 << " nota(s) de R$ 5.00" << endl;
    v %= 500;

    cout << v / 200 << " nota(s) de R$ 2.00" << endl;
    v %= 200;

    cout << "MOEDAS:" << endl;

    cout << v / 100 << " moeda(s) de R$ 1.00" << endl;
    v %= 100;

    cout << v / 50 << " moeda(s) de R$ 0.50" << endl;
    v %= 50;

    cout << v / 25 << " moeda(s) de R$ 0.25" << endl;
    v %= 25;

    cout << v / 10 << " moeda(s) de R$ 0.10" << endl;
    v %= 10;

    cout << v / 5 << " moeda(s) de R$ 0.05" << endl;
    v %= 5;

    cout << v << " moeda(s) de R$ 0.01" << endl;

    return 0;
}