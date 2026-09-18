#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef vector<int> vi;
typedef vector<long long> vll;
typedef pair<int,int> pi;

#define F first
#define S second
#define PB push_back
#define MP make_pair
#define all(x) x.begin(), x.end()

#define fast ios_base::sync_with_stdio(false); cin.tie(nullptr)

void solve() {
    string s; cin >> s;

    int biggest_sum = 0;

    int size = s.size();
    for (int i=1; i<size-1; i++) {
        for (int j=i+1; j<size; j++) {
            int new_sum = stoi(s.substr(0,i)) 
                        + stoi(s.substr(i, j-i)) 
                        + stoi(s.substr(j));

            biggest_sum = max(biggest_sum, new_sum);
        }
    }

    cout << biggest_sum << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}