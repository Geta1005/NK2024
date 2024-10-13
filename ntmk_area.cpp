#include <iostream>
#include <cmath>
#include <iomanip>
#define pi 3.14

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int a,b,c;
    cin >> a >> b >> c;
    double x = (b-a)/2;
    double h = sqrt(pow(c,2) - pow(x,2));
    double s1 = (a+b)/2*h;
    double s2 = pow((h*0.25),2)*pi;
    cout << fixed << setprecision(2) << s1-s2;
}
