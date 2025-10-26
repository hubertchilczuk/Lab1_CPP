#include <iostream>
#include <string>

class Samochod {
private:
    std::string marka;
    std::string model;
    int rokProdukcji;

public:
    // Konstruktor domyślny
    Samochod() : marka("Brak"), model("Brak"), rokProdukcji(0) {}

    // Konstruktor z argumentami
    Samochod(const std::string& m, const std::string& mo, int rok)
        : marka(m), model(mo), rokProdukcji(rok) {
    }

    // Destruktor
    ~Samochod() {
        std::cout << "Destruktor wywołany dla: " << marka << " " << model << std::endl;
    }

    // Metoda wyświetlania danych
    void wyswietl() const {
        std::cout << "Marka: " << marka << ", Model: " << model << ", Rok produkcji: " << rokProdukcji << std::endl;
    }
};

class Tablica {
private:
    int* dane;
    int rozmiar;

public:
    // Konstruktor domyślny
    Tablica() : rozmiar(10) {
        dane = new int[rozmiar];
        std::cout << "Tablica domyślna o rozmiarze 10 utworzona." << std::endl;
    }

    // Konstruktor z parametrem
    Tablica(int n) : rozmiar(n) {
        dane = new int[rozmiar];
        std::cout << "Tablica o rozmiarze " << rozmiar << " utworzona." << std::endl;
    }

    // Destruktor
    ~Tablica() {
        delete[] dane;
        std::cout << "Tablica o rozmiarze " << rozmiar << " została usunięta." << std::endl;
    }
};

int main() {
    // Utworzenie obiektu z użyciem konstruktora domyślnego
    Samochod s1;
    s1.wyswietl();

    // Utworzenie obiektu z użyciem konstruktora z argumentami
    Samochod s2("Toyota", "Corolla", 2020);
    s2.wyswietl();

    // Tworzenie obiektów Tablica
    // Użycie konstruktora domyślnego
    Tablica t1;

    // Użycie konstruktora z argumentem
    Tablica t2(5);

    return 0;  // Destruktory są wywoływane tutaj
}