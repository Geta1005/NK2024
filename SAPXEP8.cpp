#include <bits/stdc++.h>

using namespace std;

int n;
struct bg{
    int gt, vt;
};
vector<bg> a;

void fixIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void useFile(){
    freopen("SAPXEP8.INP", "r", stdin);
    freopen("SAPXEP8.OUT", "w", stdout);
}

void Load(){
    cin >> n;
    a.resize(n+1);
    for (int i = 1; i <= n; i++){
        cin >> a[i].gt;
        a[i].vt = i;
    }
}

bool cmp(bg x, bg y){
    if (x.gt != y.gt) return x.gt < y.gt;
    return x.vt < y.vt;
}

void Solve(){
    sort(a.begin(), a.end(), cmp);
    for (int i = 1; i <= n; i++) cout << a[i].gt << " ";
    cout << endl;
    for (int i = 1; i <= n; i++) cout << a[i].vt << " ";
}

int main()
{
    fixIO();
    useFile();
    Load();
    Solve();
    return 0;
}
