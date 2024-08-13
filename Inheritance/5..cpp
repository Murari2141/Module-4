#include<iostream>
using namespace std;

class Student{
public:
    string name;
    int rollno;
    Student(){}
    Student(string n, int r){
        name = n;  // remove 'string' here
        rollno = r;  // remove 'int' here
    }
    void readStudent(){
        cout<<"Enter Name : "<<endl;
        cin>>name;
        cout<<"Enter Roll No : "<<endl;
        cin>>rollno;
    }
    void writeStudent(){
        cout<<"Name : "<<name<<endl;
        cout<<"Roll No : "<<rollno<<endl;
    }
};

class Test {
public:
    double english, science, maths;
    Test() {}
    Test(double e, double s, double m){
        double english = e;  // remove 'double' here
        double science = s;  // remove 'double' here
        double maths = m;  // remove 'double' here
    }
    void readTest(){
        cout<<"Enter Marks English :"<<endl;
        cin>>english;
        cout<<"Enter Marks Science :"<<endl;
        cin>>science;
        cout<<"Enter Marks Maths :"<<endl;
        cin>>maths;
    }
    void writeTest(){
        cout<<"English :"<<english<<endl;
        cout<<"Science :"<<science<<endl;
        cout<<"Maths : "<<maths<<endl;
    }
};

class Result : public Student, public Test{
public:
    double total;
    Result() {}
    Result(string n, int r, double e, double s, double m): Student(n,r), Test(e,s,m){
        total = e+s+m;  
    }
    void readResult(){
        readStudent();
        readTest();
        total = english+science+maths;
    }
    void writeResult(){
        writeStudent();
        writeTest();
        cout<<"Total : "<<total<<endl;
        cout<<"Percentage : "<<(total/300) * 100<<"%"<<endl;
    }
};

int main(){
    Result re;
    cout<<"Enter Students  Detail "<<endl;
    re.readResult();
    cout<<"Student Result Detail"<<endl;
    re.writeResult();
}

