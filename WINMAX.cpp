#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[1000000];

void useFile(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("WINMAX.INP", "r", stdin);
    freopen("WINMAX.OUT", "w", stdout);
}

void Load(){
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
}

void Solve(){
    long long sum, maxs = -1, savepos = 0;
    for (int i = 0; i < n - k; i++){
        sum = 0;
        for (int j = i; j < i + k; j++){
            sum+=a[j];
        }
        if (sum > maxs){
            savepos = i;
            maxs = sum;
        }
    }
    cout << maxs << endl;
    for (int i = savepos; i < savepos + k; i++) cout << a[i] << " ";
}
int main()
{
    useFile();
    Load();
    Solve();
    return 0;
}

