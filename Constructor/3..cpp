#include <iostream>
using namespace std;


class Car {
private:
    string name;
    string model;
    int year;

public:
    
    Car(string n, string m, int y){
        name = n;
        model = m;
        year = y;
    }

    string getName() {
        return name;
    }

    string getModel(){
        return model;
    }
    
    int getYear(){
        return year;
    }

    void printCar(){
        cout << "Name: " << name << ", Model: " << model<<", Year :"<<year <<endl;
    }
};

int main() {
    
    Car car("TATA", "Harrier",2024);
    
    car.printCar();
    
    cout << "Name: " << car.getName() << ", Model : " << car.getModel()<<", Year : "<<car.getYear() << endl;

    return 0;
}
