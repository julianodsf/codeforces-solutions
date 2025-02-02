#include <iostream> // fluxo de entrada e saida padrao do c++
#include <string> 	// biblioteca string

using namespace std;

int main () {
    int n, x = 0;
    string s;
    cin >> n;
	// while (n--) quivale a for (int i = 1; i <= n; i++)
	// so que mais curto. Usamos quando nao vamos precisar do valor de n
	// mais tarde
    while (n--) {
        cin >> s;
        if (s[0] == '+' || s[2] == '+') {
            // s == "++X" ou s == "X++"
            x++;
        }
        else {
            // s == "--X" ou s == "X--"
            x--;
        }
    }
    cout << x << "\n";
    return 0;
}
