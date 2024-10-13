#include <iostream>
#include <cmath>
#include <iomanip>

#define pi 3.14

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    double a, b, c;
    cin >> a >> b >> c;

    double h = sqrt(c * c - pow((b - a) / 2, 2));
    double s1 = 0.5 * (a + b) * h;

    double r = h / 4;
    double s2 = pi * r * r;

    double s = s1 - s2;

    cout << fixed << setprecision(2) << s;

    return 0;
}
