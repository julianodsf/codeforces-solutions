#include <iostream>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int n, m, c, cntm = 0, cntc = 0;
	cin >> n;
	while (n--) {
		cin >> m >> c;
		if (m == c) continue;
		if (m > c) {
			cntm++;
		}
		else {
			cntc++;
		}
	}
	if (cntm == cntc) {
		cout << "Friendship is magic!^^" << "\n";
	}
	else if (cntm > cntc) {
		cout << "Mishka" << "\n";
	}
	else {
		cout << "Chris" << "\n";
	}
	return 0;
}
