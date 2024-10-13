#include <iostream>
#include <iomanip>  
#include <string>

using namespace std;

int main() {
    int a, b;
    cin >> a >> b;
    
    if (a == 0 && b == 0) {
        cout << "infinitesolutions";
    } else if (a == 0) {
        cout << "nosolution";
    } else {
        if (to_string(-(double)b / a) == "-0.000000"){
            cout << "0.0000";
        } else {
            cout << fixed << setprecision(4) << -(double)b / a;
        }
    }

    return 0;
}
