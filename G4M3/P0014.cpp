#include <bits/stdc++.h>
using namespace std;

int main() {
    string s; getline(cin, s);
    bool pularP = true;

    for (char c : s) {
        if (c == ' ') {
           cout << ' ';
           pularP = true;
           continue; 
        }

        if (pularP) {
            pularP = false;
            continue;
        }

        cout << c;
        pularP = true;

    }
    cout << endl;

    return 0;
}