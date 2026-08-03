#include <bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int calc_rhyme(const string& w1, const string& w2) {
    int i = w1.length() - 1;
    int j = w2.length() - 1;
    int counter = 0;

    while (i >= 0 && j >=0 && w1[i] == w2[j]) {
        i--;
        j--;
        counter++;
    }

    return counter;
}

void solve() {
    int score = 0;
    vector<string> words;

    for (int i=0; i<4; i++) {
        string phrase;
        getline(cin, phrase);

        string last_word = phrase.substr(phrase.rfind(' ') + 1);
        words.push_back(last_word);
        
    }

    score += calc_rhyme(words[0], words[2]);
    score += calc_rhyme(words[1], words[3]);

    cout << score << "\n";
}

int main() {
    fast;
    solve();

    return 0;
}