#include <bits/stdc++.h>

using namespace std;

int T;

void useFile(){
    ios_base::sync_with_stdio(false);
    cin.tie(0); cout.tie(0);
    freopen("WINSA2.INP", "r", stdin);
    freopen("WINSA2.OUT", "w", stdout);
}

void Load(){
    cin >> T;
}

bool Solve(){
        int n, k, x;
        cin >> n >> k >> x;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        multiset<int> s;
        int check = 0;

        for (int i = 0; i < k; i++) {
            auto it = s.lower_bound(a[i] - x);
            if (it != s.end() && (*it <= a[i] + x)) return true;
            s.insert(a[i]);
        }

        for (int i = k; i < n; i++){
            s.erase(s.find(a[i - k]));
            auto it = s.lower_bound(a[i] - x);
            if (it != s.end() && (*it <= a[i] + x)) return true;
            s.insert(a[i]);
        }
    return false;
}

int main() {
    useFile();
    Load();
    while (T--){
        if (Solve()) cout << 1 << endl;
        else cout << 0 << endl;
    }
    return 0;
}
