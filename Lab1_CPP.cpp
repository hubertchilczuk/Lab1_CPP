#include <iostream>
#include <string>

class Car {
private:
    std::string make;
    std::string model;
    int year;
    int currentYear;
public:
    Car(const std::string& make, const std::string& model, int year, int currentYear)
        : make(make), model(model), year(year), currentYear(currentYear) {
    }

    void displayInfo() {
        std::cout << "Marka: "<< make << std::endl;
        std::cout << "Model: "<< model << std::endl;
        std::cout << "Rok produkcji: " << year << std::endl;
    }

    int getCarAge() {
        return currentYear - year;
    }

    bool isSameCar(const Car& otherCar) {
        return (make == otherCar.make) &&
            (model == otherCar.model) &&
            (year == otherCar.year);
    }
};

int year = 2025;

int main() {
    Car car1("Toyota", "Corolla", 2020, year);
    Car car2("Toyota", "Corolla", 2021, year);

    car1.displayInfo();
    std::cout << "Wiek samochodu: " << car1.getCarAge()<< " lat" << std::endl;

    if (car1.isSameCar(car2)) {
        std::cout << "Samochody sa takie same." << std::endl;
    }
    else {
        std::cout << "Samochody sa rozne." << std::endl;
    }

    return 0;
}