#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int a;
    unsigned long long b;
    cin >> a >> b;

    if (b <= a) {
        cout << 0 << endl;
    } else {
        cout << (int)log2(b / a);;
    }

    return 0;
}
