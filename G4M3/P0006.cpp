#include <bits/stdc++.h>
using namespace std;

int main(){
    int t; cin >> t;
    int counter = 0;

    cin.ignore(300, '\n');

    for (int i=0; i<t; i++) {
        string m; 
        getline(cin, m);

        transform(m.begin(), m.end(), m.begin(),::tolower);

        if (m.find("fada") != string::npos) {
            counter++;
        }
    }
    cout << counter << endl;
}

/* Versão mais robusta e blindada da questão:
int main(){
    int t; cin >> t;
    int counter = 0;


    cin.ignore(300, '\n');
    for (int i = 0; i < t; i++){
        string m;
        getline(cin, m);

        transform(m.begin(), m.end(), m.begin(), [](unsigned char c){
            return tolower(c); 
        });

        for (int j = 0; j + 3 < m.length(); j++){
            if (m.substr(j, 4) == "fada"){
                bool left = (j == 0 || !isalpha((unsigned char)m[j - 1]));
                bool right = (j + 4 == m.length() || !isalpha((unsigned char)m[j + 4]));

                if (left && right){
                    counter += 1;
                    break;
                }
            }
        }
    }

    cout << counter << endl;

    return 0;
}
*/