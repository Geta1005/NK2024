#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(0);cout.tie(0);
    int n,num,ne=0,no=0;
    cin >> n;
    for (int i=0; i<n; i++){
        cin >> num;
        if (num % 2 == 0){
            ne++;
        } else {
            no++;
        }
    }
    cout << ne << " " << no;
    return 0;
}
