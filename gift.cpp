#include <iostream>
#include <iomanip>  
using namespace std;

int main() {
    int T,n,a[100],temp;
    cin >> T;
    for (int i=0; i<T; i++){
        n=0;
        temp=0;
        cin >> n;
        if (n != 1){
            for (int i2=0; i2<n; i2++){
                cin >> a[i2];
                temp += a[i2];
            }
            if ((temp/2) % 100 == 0){
                cout << "YES" << endl;
            } else{
                cout << "NO" << endl; 
            }
        } else {
            cout << "NO" << endl;
        }
    }

    return 0;
}
