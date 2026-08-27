#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string s; cin >> s;
    map<char,int> letters;
    
    for (char c : s) {
        letters[c]++;
    }
    
    int max_frequence = 0;
    char most_used;

    for (const auto &pair : letters) {
        if (pair.second > max_frequence) {
            most_used = pair.first;
            max_frequence = pair.second;
        }
    }

    cout << most_used << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}