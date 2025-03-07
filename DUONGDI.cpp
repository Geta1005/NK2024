#include <bits/stdc++.h>

using namespace std;

int m,n;
vector<vector<int>> a;
vector<vector<int>> f;
vector<int> paths;

void fixIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void useFile() {
    freopen("DUONGDI.INP", "r", stdin);
    freopen("DUONGDI.OUT", "w", stdout);
}

void load() {
    cin >> m >> n;
    a.resize(m+1, vector<int>(n+1, 0));
    f.resize(m+1, vector<int>(n+1, 0));
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            cin >> a[i][j];
        }
    }

}

void solve() {
    for (int i = 1; i <= m; i++){
        for (int j = 1; j <= n; j++){
            f[i][j] = max(f[i][j-1]+a[i][j], f[i-1][j]+a[i][j]);
        }
    }
}

void truyVet() {
    int i = m, j = n;
    while (true){
        paths.push_back(a[i][j]);
        if (f[i][j-1] > f[i-1][j]) j--;
        else i--;
        if (i == 1 && j == 1) break;
    }
    paths.push_back(a[1][1]);
    reverse(paths.begin(), paths.end());
}

void write() {
    cout << f[m][n];
}

int main() {
    fixIO();
    useFile();
    load();
    solve();
    write();
    truyVet();
    cout << endl;
    for (int i : paths) cout << i << " ";
    return 0;
}
