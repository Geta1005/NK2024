#include <iostream>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    if (m % 2 != 0 || m < 2 * n || m > 4 * n){
        cout << -1;
    } else {
        int d = (m - 2 * n) / 2;
        int c = n - d;
        if (d >= 0 && c >= 0){
            cout << c << " " << d;
        } else {
            cout << -1;
        }
    }

    return 0;
}
