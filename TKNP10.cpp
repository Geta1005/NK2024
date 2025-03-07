#include <bits/stdc++.h>

using namespace std;

int T;

void fixIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void useFile(){
    freopen("TKNP10.INP", "r", stdin);
    freopen("TKNP10.OUT", "w", stdout);
}

void Load(){
    cin >> T;
}

void Solve(){
    while (T--){
        int n, k;
        cin >> n >> k;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        sort(a, a+n);
        if (binary_search(a, a+n, k)) cout << "YES" << endl;
        else cout << "NO" << endl;
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
