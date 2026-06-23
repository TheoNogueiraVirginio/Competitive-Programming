#include <bits/stdc++.h>

using namespace std;
int main() {
    int idade; cin >> idade;

    cout << idade/365 << " ano(s)" << endl;
    idade %= 365;

    cout << idade/30 << " mes(es)" << endl;
    idade %= 30;

    cout << idade << " dia(s)" << endl;

    return 0;
}