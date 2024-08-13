#include <iostream>
using namespace std;

class Base {
private:
    int atm_pin;
public:
    string name;
protected:
    int account_num;

    Base() {
        atm_pin = 1256;
        name = "John";
        account_num = 562356830;
    }

    void showAtm_pin() {
        cout << "Atm_pin: " << atm_pin << endl;
    }

    void showName() {
        cout << "Name: " << name << endl;
    }

    void showAccount_num() {
        cout << "Account_num: " << account_num << endl;
    }
};

class Derived : public Base {
public:
    void accessMembers() {
    	
        cout << "Name : " << name << endl;
        cout << "Account No: " << account_num << endl;

        showAtm_pin();
        showName();
        showAccount_num();
    }
};

int main() {
    Derived obj;
    obj.accessMembers();
    return 0;
}

