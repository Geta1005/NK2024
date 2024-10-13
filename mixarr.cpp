#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int x,y;
    cin >> x >> y;
    vector<int> a(x+y);
    for (int i=0; i<(x+y); i++){
        cin >> a[i];
    }
    sort(a.begin(), a.end());
    for (int i : a){
        cout << i << " ";
    }
}
