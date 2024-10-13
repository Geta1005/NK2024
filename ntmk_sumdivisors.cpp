#include <iostream>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    for (int i=0; i<t; i++){
        int n,x=0;
        cin >> n;
        for (int i2=1; i2<=n; i2++){
            if (n % i2 == 0){
                for (int i3=1; i3<=i2; i3++){
                    if (i2 % i3 == 0){
                        x += i3;
                    }
                }
            }  
        }   
        cout << x << endl;
    }
}

