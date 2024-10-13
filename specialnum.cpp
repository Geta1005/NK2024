#include <iostream>
#include <string>

using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string n;
    int s = 0;
    cin >> n;

    for (char c : n) {
        s += c - '0';
    }
    if (stoll(n) % s == 0){
        cout << 1;
    } else {
        cout << 0;
    }
    return 0;
}
