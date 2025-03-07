#include <bits/stdc++.h>

using namespace std;

string s;

void useFile(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("STLONG.INP", "r", stdin);
    freopen("STLONG.OUT", "w", stdout);
}

void Load(){
    getline(cin, s);
}


void Solve(){
    set<char> se;
    int maxS = 0, l = 0;
    for (int i = 0; i < s.length(); i++){
        while (se.find(s[i]) != se.end()){
            se.erase(s[l]);
            l++;
        }
        se.insert(s[i]);
        maxS = max(maxS, i - l + 1);
    }
    cout << maxS;
}

int main() {
    useFile();
    Load();
    Solve();
    return 0;
}
