#include <iostream>
using namespace std;

class Bank{
    public:
    
    string name;
    int account_number;
    string type;
    int balance;
    
    void deposit(){
        cout<<"Your Deposit Ammount is 5000."<<endl;
    }
    void withdraw(){
        cout<<"Your Withdraw Ammount is 3000"<<endl;
    }
};



int main() {
    Bank bank1, bank2;
    
    bank1.name = "Johnson";
    bank1.account_number = 1234567890;
    bank1.type = "Saving";
    bank1.balance=15000;
    cout<<bank1.name<<endl;
    cout<<bank1.account_number<<endl;
    cout<<bank1.type<<endl;
    cout<<bank1.balance<<endl;
    bank1.deposit();
    bank1.withdraw();
    
    // bank2.name = "Devi";
    // bank2.account_number = 1056235890;
    // bank2.type = "Current";
    // bank2.balance=20000;
    // cout<<bank2.name<<endl;
    // cout<<bank2.account_number<<endl;
    // cout<<bank2.type<<endl;
    // cout<<bank2.balance<<endl;
    // bank2.deposit();
    // bank2.withdraw();
    
    return 0;
}
