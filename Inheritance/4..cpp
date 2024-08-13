#include<iostream>
using namespace std;

class Student{
    public :
    
    string name;
    int rollno;
    
    Student(){}
    Student(string n, int r){
        string name = n;
        int rollno = r;
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

class Marks {
public :
double english, science, maths;
     Marks() {}
    Marks(double e, double s, double m){
        
        double english = e;
        double science = s;
        double maths = m;
    }
        void readMarks(){
           cout<<"Enter Marks English :"<<endl;
           cin>>english;
           cout<<"Enter Marks Science :"<<endl;
           cin>>science;
           cout<<"Enter Marks Maths :"<<endl;
           cin>>maths;
       }
       void writeMarks(){
           cout<<"English :"<<english<<endl;
           cout<<"Science :"<<science<<endl;
           cout<<"Maths : "<<maths<<endl;
           }
    
};

class Marksheet : public Student,public Marks{
  public :
  
  float total;
    Marksheet() {}
    Marksheet(string n, int r, double e, double s, double m): Student(n,r),Marks(e,s,m){
        
        float total = e+s+m;
    }
    
    void readMarksheet(){
        readStudent();
        readMarks();
        
        }
        
    void writeMarksheet(){
            writeStudent();
            writeMarks();
            total = english + science + maths ;
            cout<<"Total : "<<total<<endl;
            cout<<"Percentage : "<<(total/300) * 100<<"%"<<endl;
        }
    
};

int main(){
    
    Marksheet ms ;
    
    cout<<"Enter Students Marksheet Detail "<<endl;
    ms.readMarksheet();
    
    cout<<"Student Marksheet Detail"<<endl;
    ms.writeMarksheet();
    }

