#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> nhom(n);
    for (int i = 0; i < n; ++i) {
        cin >> nhom[i];
    }

    sort(nhom.begin(), nhom.end());

    int k = 0;
    int i = 0, j = n - 1;

    while (i <= j) {
        if (nhom[i] + nhom[j] <= 4){
            i++;
            j--;
        } else {
            j--;
        }
        k++;
    }

    cout << k << endl;

    return 0;
}
