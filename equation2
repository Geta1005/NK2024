#include <bits/stdc++.h>
using namespace std;

int main() {
	double a, b, c;
	cin >> a >> b >> c;

	if (a == 0) {
		if (b == 0) {
			if (c == 0) {
				cout << "infinitesolutions";
			} else {
				cout << "nosolution";
			}
		} else {
			double s = -c / b;
			cout << fixed << setprecision(4) << s;
		}
	} else {
		double delta = b * b - 4 * a * c;
		if (delta < 0) {
			cout << "nosolution";
		} else if (delta == 0) {
			double s = -b / (2 * a);
			cout << fixed << setprecision(4) << s;
		} else {
			double x1 = (-b + sqrt(delta)) / (2 * a);
			double x2 = (-b - sqrt(delta)) / (2 * a);
			double x12 = min(x1, x2);
			double x22 = max(x1, x2);
			cout << fixed << setprecision(4) << x12 << " " << x22;
		}
	}

	return 0;
}
