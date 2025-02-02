#include <iostream>
 
using namespace std;
 
int main () {
	// em programacao competitiva, eh uma boa pratica
	// definir uma variavel "ans" (answer), como resposta
	// do nosso problema
    int a, b, ans = 0;
    cin >> a >> b;
    while (a <= b) {
        a *= 3;
        b *= 2;
        ans++;
    }
    cout << ans << "\n";
    return 0;
}