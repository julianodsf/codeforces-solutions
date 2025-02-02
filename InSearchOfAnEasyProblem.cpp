#include <iostream>
#include <string>
 
using namespace std;
 
int main () {
    int n, a;
	// definimos a resposta padrao
    string ans = "EASY";
    cin >> n;
    while (n--) {
        cin >> a;
        if (a) {
			// se pelo menos, uma resposta for 1
			// a campeticao eh "HARD"
            ans = "HARD";
            break;
        }
    }
    cout << ans << "\n";
    return 0;
}