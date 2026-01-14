#include <iostream>

using namespace std;

int main() {
    int a, b;
    cout << "Podaj pierwsza liczbe: "; cin >> a;
    cout << "Podaj druga liczbe: "; cin >> b;
    
    int orgA = a, orgB = b;

    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }

    cout << "Najwiekszy wspolny dzielnik liczb (" << orgA << "," << orgB << ") wynosi: " << a << endl;
    return 0;
}