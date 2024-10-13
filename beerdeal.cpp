#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int bia = n;
    int k = n;
    while (k >= 10) {
        int t = (k / 10) * 3;
        bia += t;
        k = t + (k % 10);
    }
    cout << bia;
    return 0;
}
