#include <bits/stdc++.h>

using namespace std;

int n, k, x;
int a[1000000];

void useFile(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("WINKMAX.INP", "r", stdin);
    freopen("WINKMAX.OUT", "w", stdout);
}

void Load(){
    cin >> n >> k >> x;
    for (int i = 0; i < n; i++) cin >> a[i];
}

void Solve(){
    long long dem = 0;
    for (int i = 0; i < k; i++) {
        if (a[i] >= x) dem++;
    }
    long long maxdem = dem;
    for (int i = k; i < n; i++){
        if (a[i] >= x) dem++;
        if (a[i-k] >= x) dem--;
        if (dem > maxdem) maxdem = dem;
    }
    cout << maxdem;
}
int main()
{
    useFile();
    Load();
    Solve();
    return 0;
}

