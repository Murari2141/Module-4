#include<iostream>
using namespace std;

class Employee {
private:
    string name;
    int employeeID;
    double salary;

public:
    
    Employee(string n, int id, double s) {
        name = n;
        employeeID = id;
        salary = s;
    }

    void calculateSalary(int performanceRating) {
        if(performanceRating >= 1 && performanceRating <= 3)
            salary *= 1.1; 
        else if(performanceRating >= 4 && performanceRating <= 6)
            salary *= 1.2; 
        else if(performanceRating >= 7 && performanceRating <= 9)
            salary *= 1.3; 
        else if(performanceRating == 10)
            salary *= 1.5; 
    }

    void setSalary(double s) {
        salary = s;
    }

    void getEmployeeDetails() {
        cout << "Name: " << name << endl;
        cout << "Employee ID: " << employeeID << endl;
        cout << "Salary: " << salary << endl;
    }
};

int main() {
    string name;
    int employeeID;
    double salary;
    int performanceRating;

    cout << "Enter employee name: ";
    cin >> name;

    cout << "Enter employee ID: ";
    cin >> employeeID;

    cout << "Enter initial salary: ";
    cin >> salary;

    Employee emp(name, employeeID, salary);

    cout << "Enter performance rating (1-10): ";
    cin >> performanceRating;

    emp.calculateSalary(performanceRating);

    emp.getEmployeeDetails();

    return 0;
}

