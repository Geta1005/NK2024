#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string num,num2;
    cin >> n;
    for (int i = 0; i<n; i++){
        cin >> num;
        num2 = num;
        reverse(num.begin(),num.end());
        if (num2 == num){
            cout << num2 << " ";
        }
    }
    
    return 0;
}
