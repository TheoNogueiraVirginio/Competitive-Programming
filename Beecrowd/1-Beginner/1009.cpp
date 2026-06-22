#include <bits/stdc++.h>

using namespace std;
int main() {
    string nome;
    double s,v;
    cin >> nome >> s >> v;
    
    double total = s + v*0.15;
    
    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << total << endl;
    
    return 0;
}