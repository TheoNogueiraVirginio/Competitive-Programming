#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    string word;
    deque<string> line;

    while (cin >> word && word != "FIM") {
        if (word == "PROXIMO") {
            if (!line.empty()) {
                cout << "PROXIMO: " << line.front() << '\n';
                line.pop_front();
                continue;
            }
        }

        line.push_back(word);
        cout << "FILA:";
        for (const string& w : line) {
            cout << ' ' << w;
        }
        cout << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}