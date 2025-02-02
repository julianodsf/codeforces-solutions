#include <iostream>
#include <string>
 
using namespace std;
 
int main () {
    string a, b;
    cin >> a >> b;
	// como as strings a e b tem o mesmo tamanho
    for (int i = 0; i < a.size (); i++) {
        if (a[i] != b[i]) {
            cout << '1';
        }
        else {
            cout << '0';
        }
    }
    cout << "\n";
    return 0;
}