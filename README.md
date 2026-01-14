# Cpp-Core-Algorithms

Zbiór implementacji algorytmów oraz narzędzi do przetwarzania danych napisanych w języku C++. Projekt demonstruje praktyczne zastosowanie programowania obiektowego, zarządzania plikami oraz optymalizacji obliczeniowej.

## Główne Funkcjonalności
- **Data Processor:** Automatyczne filtrowanie i formatowanie danych z plików tekstowych (np. ekstrakcja liczb parzystych).
- **Math & Logic:** Implementacje algorytmów teorii liczb (NWD, liczby pierwsze).
- **Matrix Operations:** Narzędzia do analizy macierzy (sumowanie obszarów, operacje na przekątnych).
- **Geometric Solutions:** Generowanie struktur graficznych w konsoli (algorytmy rysowania).

## Technologie
- **Język:** C++ (standard C++17/20)
- **Paradygmat:** Programowanie Obiektowe (OOP)
- **Narzędzia:** Obsługa strumieni fstream, wektory dynamiczne (std::vector).

## Struktura Projektu
- `/src` - Pliki źródłowe (.cpp)

## Jak uruchomić
1. Sklonuj repozytorium.
2. Skompiluj plik główny: `g++ src/main.cpp -o processor`
3. Uruchom program: `./processor`

## Bezpieczeństwo i Standardy
Kod został napisany z dbałością o:
- Obsługę wyjątków (Exception Handling).
- Zasadę RAII (bezpieczne zarządzanie zasobami i plikami).
- Czytelność zgodną ze standardami Clean Code.
