#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    vector<long long int>a(n);
    vector<long long int>b;
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    for (int i=0; i<n; i++){
        double x = sqrt(a[i]);
        if (floor(x) == x){
            b.push_back(i+1);
        }
    }
    cout << b.size() << endl;
    for (int i=0; i<b.size(); i++){
        cout << b[i] << " ";
    }
    return 0;
}
