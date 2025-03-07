#include <bits/stdc++.h>

using namespace std;

int n,q;
int a[100001], b[100001];

void fixIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void useFile(){
    freopen("QSUM2.INP", "r", stdin);
    freopen("QSUM2.OUT", "w", stdout);
}

void Load(){
    cin >> n;
    b[0] = 0;
    for (int i = 1; i <= n; i++){
        cin >> a[i];
        b[i] = b[i-1] + a[i];
    }
    cin >> q;
}

void Solve(){
    for (int i = 0; i < q; i++) {
        int x,y;
        cin >> x >> y;
        cout << b[y] - b[x-1] << endl;
    }
}
int main()
{
    fixIO();
    useFile();
    Load();
    Solve();
    return 0;
}

