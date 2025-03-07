#include <bits/stdc++.h>

using namespace std;

int n,k;
int a[100001];

void fixIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void useFile(){
    freopen("SUMSESC1.INP", "r", stdin);
    freopen("SUMSESC1.OUT", "w", stdout);
}

void Load(){
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
}

void Solve(){
    int dem = 0;
    for (int i = 0; i < n; i++){
        long long sum = 0;
        for (int j = i; j < n; j++){
            sum += a[j];
            if (sum == k) dem++;
        }
    }
    cout << dem;
}
int main()
{
    fixIO();
    useFile();
    Load();
    Solve();
    return 0;
}

