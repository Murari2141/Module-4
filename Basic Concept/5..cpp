#include <iostream>
using namespace std;

class Person {
private:
    string name,country;
    int age;

public:
    
    Person(string n, int a, string c){
        name = n;
        age = a;
        country=c;
    }

    string getName() {
        return name;
    }

    int getAge(){
        return age;
    }
      
     string getCountry(){
          return country;
      } 
    
    void printPerson(){
        cout << "Name: " << name << ", Age: " << age <<", Country :"<<country<<endl;
    }
};

int main() {
    
    Person person("Denish Paul", 40, "USA");
    
    person.printPerson();
    
    cout << "Name: " << person.getName() << ", Age: " << person.getAge()<<", Country : "<<person.getCountry() << endl;

    return 0;
}
