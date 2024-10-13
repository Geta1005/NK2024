#include <iostream>
#include <iomanip>

using namespace std;

double a,b;
long double s;

int main()
{
    cin >> a >> b;
    s = ((long double)a*b)/2;
    cout << fixed << setprecision(2) << s;
    return 0;
}
