#include <iostream>
using namespace std;

int main() {
    int a, b;
    char dau;
    cin >> a >> dau >> b;
    if (dau == '+') {
        cout << 1ll * a + b;
    } else if (dau == '-') {
        cout << 1ll * a - b;
    } else if (dau == '*') {
        cout << 1ll * a * b;
    } else if (dau == '/') {
        cout << 1ll * a / b;
    } else if (dau == '%') {
        cout << 1ll * a % b;
    }

    return 0;
}
