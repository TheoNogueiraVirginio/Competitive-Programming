#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int get_turns(int x) {
    int turns = 0;
    
    while (x > 1) {
        if (x & 1) {   
            x += 1;
        } else {
            x >>= 1;  
        }
        turns++;
    }
    return turns;
}

void solve() {
    int n;
    int max_turns = 0;

    while (cin >> n) {
        max_turns = max(max_turns, get_turns(n));
    }

    cout << max_turns << '\n';
}

int main() {
    fast;
    solve();
    return 0;
}