#include <iostream>
using namespace std;

class Cricketer{
    public :
    string name;
    int num;
    string team;
    
    public:
    Cricketer(string n, int a, string t){
        
         name = n;
         num = a;
         team = t;
    }
    
    void inputCricketer(){
        
        cout<<" Enter Name :"<<endl;
        cin>>name;
        cout<<"Enter Number :"<<endl;
        cin>>num;
        cout<<"Enter Team :"<<endl;
        cin>>team;
        
    }
    
    void displayCricketer(){
        cout<<"Name : "<<name<<endl;
        cout<<"Number : "<<num<<endl;
        cout<<"Team : "<<team<<endl;
    }
};

class Batsman:public Cricketer{
     public :    
    int totalruns;
    double averageruns;
    string bestperformance;
    
    public:
    Batsman(string n, int a, string t, int tr, double ar, string b):
    
    Cricketer(n,a,t){
    
     totalruns = tr;
     averageruns = ar;
     bestperformance = b;
    
    }
    
    void inputBatsman(){
        inputCricketer();
        cout<<"Total Run :"<<endl;
        cin>>totalruns;
        cout<<"Average Runs :"<<endl;
        cin>>averageruns;
        cout<<"Best Performance : "<<endl;
        cin>>bestperformance;
    }
    
    void displayBatsman(){
        displayCricketer();
        cout<<"Total Run is : "<< totalruns <<endl;
        cout<<"Average Runs is : "<< averageruns <<endl;
        cout<<"Best Performance from : "<< bestperformance <<endl;
        }
};

int main() {
    
    Batsman batsman("Dhoni", 07, "India", 15000, 45.0, "168* vs Australia");
    batsman.displayBatsman();
    
    return 0;
}
