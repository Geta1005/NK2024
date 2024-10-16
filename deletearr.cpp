#include <iostream>
#include <vector>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int n,m;
    cin >> n >> m;
    
    vector<int> a(n);
    
    for (int i=0; i<n; i++){
        cin >> a[i];
    }
    
    for (int i=0; i<m; i++){
        int temp;
        cin >> temp;
        if (temp >= 1 && temp <= a.size()){
            a.erase(a.begin()+temp-1);
        }
    }
    
    cout << a.size() << endl;
    
    for (int i : a){
        cout << i << " ";
    }
    
    return 0;
}
