#include <bits/stdc++.h>

using namespace std;

int n, k;
int a[1000000];

void useFile(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("WINMIN.INP", "r", stdin);
    freopen("WINMIN.OUT", "w", stdout);
}

void Load(){
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
}

void Solve(){
    long long sum = 0;
    for (int i = 0; i < k; i++) sum += a[i];
    long long mins = sum, savePos = 0;
    for (int i = k; i < n; i++){
        sum = sum - a[i - k] + a[i];
        if (sum < mins){
            mins = sum;
            savePos = i - k + 1;
        }
    }
    cout << mins << endl;
    for (int i = savePos; i < savePos + k; i++) cout << a[i] << " ";
}
int main()
{
    useFile();
    Load();
    Solve();
    return 0;
}

