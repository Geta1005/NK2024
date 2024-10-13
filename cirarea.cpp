#include <iostream>
#include <iomanip>

using namespace std;

#define pi 3.14
int r;

int main()
{
    cin >> r;
    cout << fixed << setprecision(2) << (r*2)*pi << endl;
    cout << fixed << setprecision(2) << ((long long)r*r)*pi;
    return 0;
}
/*
2rpi
r^2pi
*/
