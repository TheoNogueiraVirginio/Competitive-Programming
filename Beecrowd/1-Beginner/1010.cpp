#include <bits/stdc++.h>

using namespace std;
int main(){
    int c1, q1, c2, q2;
    double v1, v2, v;

    cin >> c1 >> q1 >> v1;
    cin >> c2 >> q2 >> v2;

    v = q1 * v1 + q2 * v2;

    cout << fixed << setprecision(2);
    cout << "VALOR A PAGAR: R$ " << v << endl;
    return 0;
}