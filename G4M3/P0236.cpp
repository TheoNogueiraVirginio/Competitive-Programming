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

int calculate_total_flowers (const int days, const vector<pair<int,int>> &flowers) {
    int total_flowers = 0;
    for (auto [x,y] : flowers) {
        int current_flowers = days/x;
        total_flowers += min(current_flowers, y);
    }
    return total_flowers;
}

int binary_search (const vector<pair<int,int>> &flowers, const int &target) {
    int left = 0;
    int right = 81;

    while (left <= right) {
        int middle = left + (right - left) / 2;
        int total_flowers = calculate_total_flowers(middle, flowers);

        if (total_flowers >= target) {
            right = middle-1;
        }

        else if (total_flowers < target) {
            left = middle+1;
        }
    }
    return left;
}

void solve() {
    int n, q;
    cin >> n >> q;

    vector<pair<int,int>> flowers(n);

    for (int i=0; i<n; i++) cin >> flowers[i].first;
    for (int i=0; i<n; i++) cin >> flowers[i].second;

    int min_days = binary_search(flowers, q);

    cout << min_days << '\n';
}

int main() {
    fast;
    solve();

    return 0;
}