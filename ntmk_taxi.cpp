#include <iostream>

using namespace std;

int main() {
    int n,a,sum=0;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> a;
        sum += a;
    }
    a = sum / 4;
    if (a*4 >= sum){
        cout << a;
    } else {
        cout << a+1;
    }
}
