#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

struct Player {
    string name;
    int age, a, b, c, d;
    int id;
    int max_abc;
    int sum_cd;
};

bool comparePlayers(const Player& p1, const Player& p2) {
    if (p1.max_abc != p2.max_abc) return p1.max_abc > p2.max_abc;
    if (p1.sum_cd != p2.sum_cd) return p1.sum_cd > p2.sum_cd;
    if (p1.age != p2.age) return p1.age < p2.age;
    return p1.id < p2.id;
}

void solve() {
    int n, m;
    cin >> n >> m;
    
    vector<Player> players(m);
    
    for (int i = 0; i < m; i++) {
        cin >> players[i].name 
            >> players[i].age 
            >> players[i].a 
            >> players[i].b 
            >> players[i].c 
            >> players[i].d;

        players[i].id = i;
        players[i].max_abc = max({players[i].a, players[i].b, players[i].c});
        players[i].sum_cd = players[i].c + players[i].d;
    }

    sort(players.begin(), players.end(), comparePlayers);

    for (int i = 0; i < n; i++) {
        cout << players[i].name << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}