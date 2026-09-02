#include <bits/stdc++.h> 
using namespace std;

#define fast ios_base::sync_with_stdio(false);cin.tie(NULL);

void solve() {
    string line;
    getline(cin, line);
    int n = stoi(line);

    unordered_set<char> letters;
    for (int i = 0; i < n; i++) {
        getline(cin, line);
        letters.insert(line[0]);
    }
    cout << letters.size() << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}