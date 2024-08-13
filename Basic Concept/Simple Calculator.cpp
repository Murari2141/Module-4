
#include <iostream>
using namespace std;

class Calculator{
    
    float num1,num2;
    
    public :
    void getnumber(){
        cout<<"Enter your Number 1:"<<endl;
        cin>>num1;
        cout<<"Enter your Number 2:"<<endl;
        cin>>num2;
    }
     void add(){    
        cout<<"Addition is: "<<num1+num2<<endl;
    }
    void Sub(){
        cout<<"Subtraction is :"<<num1-num2<<endl;
    }
    void Mul(){
        cout<<"Multiplication is:"<<num1*num2<<endl;
        
    }
     void Div(){
         cout<<"Division is:"<<num1/num2<<endl;
     }
    
};

int main() {
    
    Calculator calcy;
    int choice;
    
    cout<<"Enter Your Choice Operator :"<<endl;
    cout<<"1.Addition 2.Subtraction 3.Multiplication 4.Division"<<endl;
    cin>>choice;
    
    switch(choice){
        case 1:
        calcy.getnumber();
        calcy.add();
        break;
        
        case 2:
        
        calcy.getnumber();
        calcy.Sub();
        break ;
        
        case 3:
        
        calcy.getnumber();
        calcy.Mul();
        break ;
         
         case 4:
         calcy.getnumber();
         calcy.Div();
         break ;
         
         default :
         
         cout<<"Please enter Valid number"<<endl;
    }
    
    

    return 0;
}
