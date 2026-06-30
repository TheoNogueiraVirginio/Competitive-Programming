#include <bits/stdc++.h>

using namespace std;
int main() {
    double x; cin >> x;

    if (x<0 || x>100) {
        cout << "Fora de intervalo" << endl;
    }
    else {
        cout << "Intervalo ";

        if (0 <= x && x <= 25){
            cout << "[0,25]" << endl;
        }
        else if (25 < x && x <= 50){
            cout << "(25,50]" << endl;
        }
        else if (50 < x && x <= 75){
            cout << "(50,75]" << endl;
        }
        else if (75 < x && x <= 100){
            cout << "(75,100]" << endl;
        }
    }

    return 0;
}