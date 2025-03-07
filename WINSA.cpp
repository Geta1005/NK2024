#include <bits/stdc++.h>

using namespace std;

int T;

void useFile(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("WINSA.INP", "r", stdin);
    freopen("WINSA.OUT", "w", stdout);
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

        set<int> s;
        int check = 0;

        for (int i = 0; i < k; i++) {
            if (s.count(a[i]) != 0) {
                check = 1;
                break;
            }
            s.insert(a[i]);
        }


        if (check == 0) {
            for (int i = k; i < n; i++) {
                s.erase(a[i - k]);
                if (s.count(a[i]) != 0) {
                    check = 1;
                    break;
                }
                s.insert(a[i]);
            }
        }

        cout << check << endl;
        s.clear();
    }
}

int main() {
    useFile();
    Load();
    Solve();
    return 0;
}
