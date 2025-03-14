#include <iostream>

using namespace std;

int main () {
	ios::sync_with_stdio (0);
	cin.tie (0);
	int n, sum = 0, i = 1;
	cin >> n;
	while (n >= sum) {
		sum += (i * (i + 1)) / 2;
		i++;
	}
	cout << i - 2 << "\n";
	return 0;
}
