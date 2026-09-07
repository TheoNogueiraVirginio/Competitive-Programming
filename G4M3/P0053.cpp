#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int t; cin >> t;

    for (int i=0; i<t; i++) {
        string p, v;
        cin >> p >> v;

        int score_p=0, score_v=0;

        for (char c : p) {
            switch (c) {
                case 'a':
                    score_p += 1;
                    break;
                case 'e':
                    score_p += 2;
                    break;
                case 'i':
                    score_p += 3;
                    break;
                case 'o':
                    score_p += 4;
                    break;
                case 'u':
                    score_p += 5;
                    break;
                case 'y':
                    score_p += 100;
                    break;
            }
        }

        for (char c : v) {
            switch (c) {
                case 'a':
                    score_v += 1;
                    break;
                case 'e':
                    score_v += 2;
                    break;
                case 'i':
                    score_v += 3;
                    break;
                case 'o':
                    score_v += 4;
                    break;
                case 'u':
                    score_v += 5;
                    break;
                case 'y':
                    score_v += 100;
                    break;
            }
        }

        if (score_p == score_v) {
            cout << "naruto\n";
            continue;
        }

        cout << (score_p>score_v ? p : v) << '\n';
    }
}

int main() {
    fast;
    solve();
    return 0;
}