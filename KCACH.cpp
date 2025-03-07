#include <bits/stdc++.h>

using namespace std;

int n;
struct bg{
    int gt, vt;
};
bg a[1000001];
int b[1000001];

void fixIO(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
}

void useFile(){
    freopen("KCACH.INP", "r", stdin);
    freopen("KCACH.OUT", "w", stdout);
}

void Load(){
    cin >> n;
    for (int i = 1; i <= n; i++){
        cin >> a[i].gt;
        b[i] = a[i].gt;
        a[i].vt = i;
    }
}

bool cmp(bg x, bg y){
    if (x.gt != y.gt) return x.gt < y.gt;
    return x.vt < y.vt;
}

void Solve(){
    sort(a+1, a+n+1, cmp);
    sort(b+1, b+n+1);
    int vt = lower_bound(b+1, b+n+1, a[n].gt) - b;
    if (a[1].vt > a[vt].vt) cout << a[n].vt << " " << a[1].vt;
    else cout << a[1].vt << " " << a[vt].vt;
}

int main()
{
    fixIO();
    useFile();
    Load();
    Solve();
    return 0;
}
