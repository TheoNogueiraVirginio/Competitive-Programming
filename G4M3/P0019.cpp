#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

void solve() {
    int l,c;
    cin >> l >> c;

    vector<vector<int>> matriz(l, vector<int>(c));

    vector<bool> rows(l);
    vector<bool> columns(c);
    
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            cin >> matriz[i][j];
            if (matriz[i][j] == 1) {
                rows[i] = true;
                columns[j] = true;
            }
        }
    }

    int flasks_needed = count(rows.begin(), rows.end(), true) + count(columns.begin(), columns.end(), true);
    cout << flasks_needed << '\n';
    
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            cout << matriz[i][j] << ' ';
        }

        cout << (rows[i] ? "M\n" : "-\n");
    }

    for (int i=0; i<c; i++) {
        if (columns[i]) cout << "M";
        else cout << "-";
        
        if (i < c - 1) cout << " ";
    }
    cout << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}
