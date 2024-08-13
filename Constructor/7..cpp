#include<iostream>
using namespace std;

class Date {
private:
    int day, month, year;

public:
    
    Date(int d, int m, int y) {
        day = d;
        month = m;
        year = y;
    }

    void setDay(int d) {
        day = d;
    }

    void setMonth(int m) {
        month = m;
    }

    void setYear(int y) {
        year = y;
    }

    int getDay() {
        return day;
    }

    int getMonth() {
        return month;
    }

    int getYear() {
        return year;
    }

    bool isValidDate() {
        if(month < 1 || month > 12)
            return false;

        if(day < 1 || day > 31)
            return false;

        if(month == 2) {
            if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
                if(day > 29)
                    return false;
            } else {
                if(day > 28)
                    return false;
            }
        }

        if(month == 4 || month == 6 || month == 9 || month == 11) {
            if(day > 30)
                return false;
        }

        return true;
    }

    void displayDate() {
        cout << day << "/" << month << "/" << year << endl;
    }
};

int main() {
    int day, month, year;

    cout << "Enter day: ";
    cin >> day;

    cout << "Enter month: ";
    cin >> month;

    cout << "Enter year: ";
    cin >> year;

    Date dt(day, month, year);

    if(dt.isValidDate()) {
        cout << "Valid date" << endl;
        dt.displayDate();
    } else {
        cout << "Invalid date" << endl;
    }

    return 0;
}
