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
    array<int,3> numbers;

    cin >> numbers[0]
        >> numbers[1]
        >> numbers[2];

    sort(all(numbers));

    for (int x : numbers) {
        cout << x << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}