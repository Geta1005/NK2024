#include <iostream>
#define MAXN 1001

using namespace std;

int n;
int a[MAXN][MAXN];

void fixIO() {
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

void useFile() {
    freopen("XOANOC.INP", "r", stdin);
    freopen("XOANOC.OUT", "w", stdout);
}

void load() {
    cin >> n;
}

void solve() {
    int h = 1;
    int jmin = 1, jmax = n, imin = 2, imax = n;
    int k=1, i=1, j=1;
    while (k <= n*n){
        a[i][j] = k;
        k++;
        switch(h){
        case 1: //phai
            j++;
            break;
        case 2: //xuong
            i++;
            break;
        case 3: //trai
            j--;
            break;
        case 4: //len
            i--;
            break;
        }
        if (h==1 && j==jmax) { h=2; jmax--; };
        if (h==2 && i==imax) { h=3; imax--; };
        if (h==3 && j==jmin) { h=4; jmin++; };
        if (h==4 && i==imin) { h=1; imin++; };
    }
    for (int i = 1; i <= n; i++){
        for (int j = 1; j <= n; j++){
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
    return 0;
}
