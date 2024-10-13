#include <iostream>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long int n;
    cin >> n;
    
    if (n < 2){
        cout << 0;
    } else {
        for (int i=2; i<=trunc(sqrt(n)); i++){
            if (n % i == 0){
                cout << 0;
                return 0;
            }
        }
        cout << 1;
    }
    return 0;
}
