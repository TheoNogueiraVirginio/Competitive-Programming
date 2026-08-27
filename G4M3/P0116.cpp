#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int find_page_number(const vector<pair<string,int>> &words, const string &target) {
    int left=0;
    int right = words.size()-1;

    while (left <= right) {
        int middle = left+(right-left)/2;

        if (words[middle].first == target) return words[middle].second;

        if (target > words[middle].first) left = middle+1;
        if (target < words[middle].first) right = middle-1;
    }
    return -1;
}

void solve() {
    int n, m; 
    cin >> n >> m;

    vector<pair<string,int>> words;

    for (int i=0; i<n; i++) {
        for (int j=0; j<m; j++) {
            string s; cin >> s;
            words.emplace_back(s, i);
        }
    }

    int q; cin >> q;
    for (int i=0; i<q; i++) {
        string query; cin >> query;
        int line = find_page_number(words, query);
        cout << query << " " << line+1 << '\n';
    }
}

int main() {
    fast;
    solve();

    return 0;
}