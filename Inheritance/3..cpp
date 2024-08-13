#include<iostream>
using namespace std;

class Person{
    public :
    
    string name;
    int age;
    
    Person(){}
    Person(string n, int a){
        string name = n;
        int age = a;
    }
    
    void readPerson(){
        cout<<"Enter Name : "<<endl;
        cin>>name;
        cout<<"Enter Age : "<<endl;
        cin>>age;
    }
    
     void writePerson(){
         cout<<"Name : "<<name<<endl;
         cout<<"Age : "<<age<<endl;
     } 
    
};
class Student : public Person{
    double percentage;
    
    public :
    
    Student(){}
    Student(string n, int a, double p) : Person (n, a){
        
        percentage = p;
        }
        
        void readStudent(){
            readPerson();
            cout << "Enter Percentage : "<<endl;
            cin>>percentage;
        }
    
       void writeStudent(){
           writePerson();
           
           cout<<"Percentage : "<<percentage<<"%"<<endl;
       }
    };
    
class Teacher : public Person{
    
    double salary;
    
    public :
    
    Teacher(){}
    Teacher(string n, int a, double s) : Person (n, a){
        
        salary = s;
        }
        
        void readTeacher(){
            readPerson();
            cout << "Enter Salary : "<<endl;
            cin>>salary;
        }
    
       void writeTeacher(){
           writePerson();
           
           cout<<"Salary  :$ "<<salary<<endl;
       }
    };
    
    int main (){
        
        Student s1;
        Teacher t1;
        
        cout<<"Student Detail "<<endl;
        s1.readStudent();
        
        cout<<"Teacher Detail "<<endl;
        t1.readTeacher();
        
        cout<<"Students Detail:"<<endl;
        s1.writeStudent();
        
        cout<<"Teacher Detail :"<<endl;
        t1.writeTeacher();
    }
