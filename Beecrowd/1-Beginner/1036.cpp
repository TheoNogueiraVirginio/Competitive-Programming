#include <bits/stdc++.h>

using namespace std;
int main() {
    double a,b,c;
    cin >> a >> b >> c;

    double delta = pow(b,2) - 4*a*c;

    if (a==0 || delta<0) {
        cout << "Impossivel calcular" << endl;
    }
    else {
        cout << fixed << setprecision(5);

        cout << "R1 = " << (-b + pow(delta,0.5)) / (2.0*a) << endl;
        cout << "R2 = " << (-b - pow(delta,0.5)) / (2.0*a) << endl;
    }
    return 0;
}