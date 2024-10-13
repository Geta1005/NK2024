#include <iostream>
#include <vector>


using namespace std;

int main() {
    int n,max;
    vector<int> a;
    cin >> n;
    a.resize(n);
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    max = a[0];
    for (int i : a){
        if (i > max){
            max = i;
        }
    }
    cout << max;

    return 0;
}
