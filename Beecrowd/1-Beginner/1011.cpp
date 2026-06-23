#include <bits/stdc++.h>

using namespace std;
int main() {
    double r; cin >> r;

    double area = 4.0/3 * 3.14159 * pow(r,3);

    cout << fixed << setprecision(3);
    cout << "VOLUME = " << area << endl;
    
    return 0;
}