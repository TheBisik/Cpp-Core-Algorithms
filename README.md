# System Toolbox - Fabian Barański

Repozytorium zawiera zbiór algorytmów zrealizowanych w języku C++ w ramach zajęć laboratoryjnych. Programy rozwiązują zagadnienia matematyczne, logiczne oraz operacje na strukturach danych.


Poniżej znajduje się szczegółowy opis zaimplementowanych funkcjonalności na podstawie specyfikacji:

### 1. Obliczanie wartości wyrażenia
Program wyznacza wartość matematyczną wyrażenia:
$$\frac{(a^{2}+b)}{(a+b)^{2}}$$
* **Wymagania:** Zmienne `a` i `b` typu `float` wczytywane z klawiatury.
* **Walidacja:** Program sprawdza wykonalność obliczenia (blokada dzielenia przez zero w przypadku, gdy $a+b=0$).

### 2. Warunkowe obliczenia typu Double
Obliczanie wartości funkcji w zależności od wartości parametru `c`:
* Dla $c > 0$: wynik = $a^{2} + b$.
* Dla $c < 0$: wynik = $a - b^{2}$.
* Dla $c = 0$: wynik = $\frac{1}{a-b}$.
* **Typ danych:** `double`.
* **Walidacja:** Sprawdzanie dzielenia przez zero (szczególnie dla przypadku $c=0$, gdy $a=b$).

### 3. Największy Wspólny Dzielnik (NWD)
Implementacja klasycznego **algorytmu Euklidesa** dla dwóch dodatnich liczb całkowitych.
* **Ograniczenie:** Algorytm zrealizowany wyłącznie przy użyciu operacji odejmowania (bez operatora modulo/dzielenia).

### 4. Suma cyfr liczby naturalnej
Program wyliczający sumę cyfr rozwinięcia dziesiętnego podanej liczby.
* **Przykład:** Dla liczby `12345` program zwraca wynik `15`.

### 5. Badanie liczby pierwszej
Algorytm sprawdzający, czy podana liczba jest liczbą pierwszą, czy złożoną.
* **Optymalizacja:** Zminimalizowana liczba operacji dzielenia.
* **Obsługa danych:** Przystosowany do testowania bardzo dużych liczb (wymagane użycie typu o zwiększonej precyzji, np. `ulong`).

### 6. Generator choinki
Program rysujący wzór choinki z gwiazdek (`*`) o wysokości podanej przez użytkownika.
* **Struktura:** Każdy kolejny wiersz korony zwiększa szerokość o 2 gwiazdki.
* **Pień:** Figura posiada pień o stałej wysokości dwóch znaków.
* **Formatowanie:** Symetryczne wyrównanie za pomocą spacji.

### 7. Analiza macierzy kwadratowej
Program analizujący relacje między elementami macierzy kwadratowej wczytywanej wierszami.
* **Funkcjonalność:** Porównuje sumę elementów znajdujących się **powyżej** głównej przekątnej z sumą elementów znajdujących się **poniżej** niej.

---

## 📂 Opis plików w `./src`

Katalog `./src` zawiera moduły źródłowe odpowiadające poszczególnym algorytmom:

* **`MathExpression_Float.cpp`**: Implementacja Zadania 1 z użyciem typu `float` i walidacją mianownika.
* **`ConditionalLogic_Double.cpp`**: Logika Zadania 2 obsługująca trzy ścieżki obliczeń zależne od zmiennej `c`.
* **`NWDEuklides.cpp`**: Algorytm Euklidesa oparty na odejmowaniu (Zadanie 3).
* **`SumOfDigits.cpp`**: Moduł Zadania 4 sumujący cyfry liczby przy użyciu operatora modulo.
* **`PrimeNumberChecker.cpp`**: Zadanie 5; zawiera optymalizację pętli sprawdzającej dzielniki do pierwiastka liczby.
* **`ChristmasTree_Pattern.cpp`**: Zadanie 6; zarządza wyświetlaniem korony i pnia choinki za pomocą pętli `for`.
* **`Matrix_DiagonalSum.cpp`**: Implementacja Zadania 7 analizująca sumy elementów macierzy względem przekątnej.
* **`Zadania_cpp.pdf`**: Zadania laboratoryjne

---

## 🛠️ Technologie i kompilacja
* **Język:** C++
* **Biblioteki:** `iostream`, `cmath`, `vector`
* **Kompilacja:** 
```bash
g++ main.cpp -o toolbox