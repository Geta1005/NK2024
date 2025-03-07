#include <bits/stdc++.h>
#define MAXN 1001

using namespace std;

int n;
vector<vector<int>> a;

void fixIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void useFile() {
    freopen("MAPHUONG.INP", "r", stdin);
    freopen("MAPHUONG.OUT", "w", stdout);
}

void load() {
    cin >> n;
    a.resize(n+1, vector<int>(n+1, 0));
}

void solve() {
    int k = 1, i = 1, j = n/2 + 1;
    while (k <= n*n){
        a[i][j] = k;
        k++;
        i--;
        j++;
        if (i == 0) i = n;
        if (j == n+1) j = 1;
        if (a[i][j] != 0) {
            i += 2;
            j--;
            if (i > n) i -= n;
            if (j == 0) j = n;
        }
    }
}

void write() {
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    fixIO();
    useFile();
    load();
    solve();
    write();
    return 0;
}
