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
    int n; cin >> n;
    string s; cin >> s;

    unordered_map<char, int> freq;

    int max_length = 0;
    int left = 0;

    for (int right = 0; right<n; right++) {
        freq[s[right]]++;

        while (freq.size() > 2) {
            freq[s[left]]--;
            if (freq[s[left]] == 0) freq.erase(s[left]);
            left++;
        }
        
        max_length = max(max_length, right-left +1);
    }

    cout << max_length << '\n';
}


int main() {
    fast;
    solve();

    return 0;
}