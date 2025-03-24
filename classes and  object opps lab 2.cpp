#include <iostream>
#include <string>

using namespace std;
class Car {
public:
    string brand;
    string model;
    int year;
    void displayDetails() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};
int main() {
    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Camry";
    myCar.year = 2023;

    myCar.displayDetails();

    return 0;
}