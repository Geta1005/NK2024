#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n,max;
    vector<int> a,vitri;
    cin >> n;
    a.resize(n);
    max = 0;
    for (int i=0; i<n; i++){
        cin >> a[i];
        if (a[i] > max){
            max = a[i];
        }
    }
    for (int i=0; i<n; i++){
        if (a[i] == max){
            vitri.push_back(i+1);
        }
    }
    for (int i : vitri){
        cout << i << " ";
    }

    return 0;
}
