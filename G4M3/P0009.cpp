#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

bool all_cleared(const string& photo) {
    for (char c : photo) {
        if (c != 'O') return false;
    }
    return true;
}

void process_photo(const string& photo, int& pos, int& melons) {
    if (photo[pos] == 'X') {
        cout << "Silêncio ...\n";
        return;
    }

    int n = photo.length();
    bool move_left = (pos > 0 && photo[pos - 1] == 'O');
    bool move_right = (pos + 1 < n && photo[pos + 1] == 'O');

    int total_options = (move_left ? 1 : 0) + (move_right ? 1 : 0);

    if (total_options == 1) {
        pos += (move_left ? -1 : 1);
        cout << "Correndo pro esconderijo " << pos << "!\n";
    } else {
        melons++;
        cout << "Tiro de Melão!!!\n";
    }
}

void solve() {
    string photo;
    int pos = 0, melons = 0;

    while (cin >> photo && !all_cleared(photo)) {
        process_photo(photo, pos, melons);
    }

    cout << "Vitória com " << melons << " melões!\n";
}

int main() {
    fast;
    solve();

    return 0;
}