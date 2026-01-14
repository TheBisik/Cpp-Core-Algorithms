#include <iostream>
#include <cmath>

using namespace std;

int main() {
    float a, b;
    cout << "Podaj liczbe a: ";
    cin >> a;
    cout << "Podaj liczbe b: ";
    cin >> b;

    float mianownik = pow(a + b, 2);

    if (mianownik != 0) {
        float wynik = (pow(a, 2) + b) / mianownik;
        cout << "Wartosc wyrazenia wynosi: " << wynik << endl;
    } else {
        cout << "Proba dzielenia przez zero" << endl;
    }
    return 0;
}