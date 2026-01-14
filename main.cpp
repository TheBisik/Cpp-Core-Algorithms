#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

// Pomocnicza funkcja czyszcząca ekran
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Zadanie 1: Wyrażenie Float
void zadanie1() {
    float a, b;
    cout << "Podaj liczbe a: "; cin >> a;
    cout << "Podaj liczbe b: "; cin >> b;
    float mianownik = pow(a + b, 2);
    if (mianownik != 0) {
        float wynik = (pow(a, 2) + b) / mianownik;
        cout << "Wartosc wyrazenia wynosi: " << wynik << endl;
    } else {
        cout << "Proba dzielenia przez zero" << endl;
    }
}

// Zadanie 2: Warunkowe obliczenia Double
void zadanie2() {
    double a, b, c, wynik;
    cout << "Podaj liczbe a: "; cin >> a;
    cout << "Podaj liczbe b: "; cin >> b;
    cout << "Podaj liczbe c: "; cin >> c;
    if (c > 0) {
        wynik = pow(a, 2) + b;
        cout << "Wartosc wyrazenia wynosi: " << wynik << endl;
    } else if (c < 0) {
        wynik = a - pow(b, 2);
        cout << "Wartosc wyrazenia wynosi: " << wynik << endl;
    } else {
        if (a - b != 0) {
            wynik = 1.0 / (a - b);
            cout << "Wartosc wyrazenia wynosi: " << wynik << endl;
        } else {
            cout << "Proba dzielenia przez zero" << endl;
        }
    }
}

// Zadanie 3: NWD Euklides
void zadanie3() {
    int a, b;
    cout << "Podaj pierwsza liczbe: "; cin >> a;
    cout << "Podaj druga liczbe: "; cin >> b;
    int orgA = a, orgB = b;
    while (a != b) {
        if (a > b) a -= b;
        else b -= a;
    }
    cout << "Najwiekszy wspolny dzielnik liczb (" << orgA << "," << orgB << ") wynosi: " << a << endl;
}

// Zadanie 4: Liczba pierwsza
void zadanie4() {
    unsigned long long liczba;
    cout << "Podaj liczbe: "; cin >> liczba;
    if (liczba < 2) {
        cout << "Liczba " << liczba << " nie jest pierwsza ani zlozona." << endl;
        return;
    }
    bool pierwsza = true;
    unsigned long long dzielnik = 0;
    for (unsigned long long i = 2; i <= sqrt(liczba); i++) {
        if (liczba % i == 0) {
            pierwsza = false;
            dzielnik = i;
            break;
        }
    }
    if (pierwsza) cout << "Liczba " << liczba << " jest liczba pierwsza" << endl;
    else cout << "Liczba " << liczba << " jest liczba zlozona podzielna przez " << dzielnik << endl;
}

// Zadanie 5: Macierz - przekątne
void zadanie5() {
    int n;
    cout << "Podaj stopien macierzy: "; cin >> n;
    int gora = 0, dol = 0, temp;
    for (int i = 1; i <= n; i++) {
        for (int k = 1; k <= n; k++) {
            cout << "Podaj element [" << i << "," << k << "]=";
            cin >> temp;
            if (i < k) gora += temp;
            else if (i > k) dol += temp;
        }
    }
    cout << "Suma elementow powyzej: " << gora << ", ponizej: " << dol << endl;
    if (gora > dol) cout << "Suma powyzej JEST wieksza." << endl;
    else cout << "Suma powyzej NIE JEST wieksza." << endl;
}

// Zadanie 6: Choinka
void zadanie6() {
    int h;
    cout << "Podaj wysokosc choinki: "; cin >> h;
    for (int i = 0; i < h; i++) {
        for (int j = 0; j < h - i - 1; j++) cout << " ";
        for (int j = 0; j < 2 * i + 1; j++) cout << "*";
        cout << endl;
    }
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < h - 1; j++) cout << " ";
        cout << "*" << endl;
    }
}

// Zadanie 7: Suma cyfr
void zadanie7() {
    int liczba, suma = 0;
    cout << "Podaj liczbe: "; cin >> liczba;
    int temp = liczba;
    while (temp > 0) {
        suma += temp % 10;
        temp /= 10;
    }
    cout << "Suma cyfr rozwiniecia dziesietnego wynosi = " << suma << endl;
}

int main() {
    int wybor;
    do {
        cout << "===========================================\n";
        cout << "   SYSTEM TOOLBOX - FABIAN BARANSKI\n";
        cout << "===========================================\n";
        cout << "1. Obliczanie wyrazenia\n";
        cout << "2. Warunkowe obliczenia c>0/c<0\n";
        cout << "3. Najwiekszy Wspolny Dzielnik - NWD \n";
        cout << "4. Sprawdzanie liczby pierwszej\n";
        cout << "5. Analiza macierzy - Przekatne\n";
        cout << "6. Rysowanie choinki\n";
        cout << "7. Suma cyfr liczby\n";
        cout << "0. Wyjscie\n";
        cout << "-------------------------------------------\n";
        cout << "Wybor: ";
        cin >> wybor;

        if (wybor >= 1 && wybor <= 7) {
            clearScreen();
            switch(wybor) {
                case 1: zadanie1(); break;
                case 2: zadanie2(); break;
                case 3: zadanie3(); break;
                case 4: zadanie4(); break;
                case 5: zadanie5(); break;
                case 6: zadanie6(); break;
                case 7: zadanie7(); break;
            }

            cout << "\nNacisnij Enter, aby wrocic do menu...";
            cin.ignore();
            cin.get();
            clearScreen();
        }

    } while (wybor != 0);

    return 0;
}