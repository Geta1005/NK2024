#include <bits/stdc++.h>

using namespace std;

string s;
int demRieng;


void fixIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
}

void useFile(){
    freopen("STLONG.INP", "r", stdin);
    freopen("STLONG.OUT", "w", stdout);
}

void Load(){
    getline(cin, s);
}

bool check(int k){
    map<char, int> mapne;
    for (int i = 0; i < k; i++) mapne[s[i]]++;
    if (mapne.size() == demRieng) return 1;
    for (long long i = k; i < s.length(); i++){
        mapne[s[i-k]]--;
        if (mapne[s[i-k]] == 0) mapne.erase(s[i-k]);
        mapne[s[i]]++;
        if (mapne.size() == demRieng) return 1;
    }
    return 1;
}

void Solve() {
    set<char> se(s.begin(), s.end());
    demRieng = se.size();
    int res = demRieng;
    while (true){
        if (check(res)){
            cout << res;
            break;
        } else res++;
    }
}

int main() {
    fixIO();
    useFile();
    Load();
    Solve();
    return 0;
}
