#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string phrase; 
    getline(cin>>ws, phrase);

    transform(phrase.begin(), phrase.end(), phrase.begin(), ::tolower);

    for (int i=0; i<phrase.length(); i++) {
        phrase[i] = toupper(phrase[i]);
        cout << phrase << '\n';
        phrase[i] = tolower(phrase[i]);
    }
}

int main() {
    fast;
    solve();

    return 0;
}