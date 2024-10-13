#include <iostream>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long se = 0, so = 0;
    cin >> n;
    vector<int> a(n);
    
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) {
            se += a[i];
        } else {
            so += a[i];
        }
    }

    bool x = true;
    bool y = true;
    
    for (int i = 1; i < a.size(); i++) {
        if (a[i - 1] < a[i]) {
            y = false;
        } 
        if (a[i - 1] > a[i]) {
            x = false;
        }
    }

    cout << se << endl << so << endl;

    if (x) {
        cout << 1;
    } else if (y) {
        cout << -1;
    } else {
        cout << 0;
    }
    
    return 0;
}
