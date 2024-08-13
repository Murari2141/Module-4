#include <iostream>
using namespace std;

class Bank {
private:
    string  name;
    int account_num;
    int balance;

public:
    
    Bank(string n, int a, int b){
        name = n;
        account_num = a;
        balance = b;
    }

    string getName() {
        return name;
    }

    int getAccount_num(){
        return account_num;
    }
    
    int getBalance(){
        return balance;
    }
        
        void deposit(){
            cout<<"Your Deposit Ammount is 12000 ."<<endl;
        }
        
        void withdraw(){
            cout<<"Your Withdraw Ammount is 5000."<<endl;
        }
    
};

int main() {
    
    Bank bank("Avinash v. dholera", 123456789, 10000);
    
    cout << " Name: " << bank.getName() << endl;
    cout<<" Account Number is : " <<bank.getAccount_num()<<endl;
    cout<<" Balance is  : "<<bank.getBalance() << endl;
    bank.deposit();
    bank.withdraw();

    return 0;
}
