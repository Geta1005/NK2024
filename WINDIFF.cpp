#include <bits/stdc++.h>

using namespace std;

int n, k, a[1000000];
map<int, int> mapne;

void fixIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);
}

void useFile(){
    freopen("WINDIFF.INP", "r", stdin);
    freopen("WINDIFF.OUT", "w", stdout);
}

void Load(){
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
}

void Solve() {
    int dem = 0;
    for (int i = 0; i < k; i++){
        mapne[a[i]]++;
    }
    cout << mapne.size() << " ";
    for (int i = k; i < n; i++){
        mapne[a[i]]++;
        mapne[a[i-k]]--;
        if (mapne[a[i-k]] == 0) mapne.erase(a[i-k]);
        cout << mapne.size() << " ";
    }


}

int main() {
    fixIO();
    useFile();
    Load();
    Solve();
    return 0;
}
