#include <bits/stdc++.h>

using namespace std;

int n,q;
vector<int> a;

void fixIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void useFile(){
    freopen("QSUM.INP", "r", stdin);
    freopen("QSUM.OUT", "w", stdout);
}

void Load(){
    cin >> n;
    a.resize(n);
    for (int &i : a) cin >> i;
    cin >> q;
}

long long sumIJ(int x, int y){
    long long sum = 0;
    for (int i = x-1; i < y; i++) sum += a[i];
    return sum;
}

void Solve(){
    for (int i = 0; i < q; i++) {
        int x,y;
        cin >> x >> y;
        cout << sumIJ(x, y) << endl;
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

