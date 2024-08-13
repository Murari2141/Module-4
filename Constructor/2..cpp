#include<iostream>
using namespace std;

class Maths{
  int num1,num2;
   
   public:
     Maths(int a, int b){
         num1 = a;
         num2 = b;
     }  
   
   int add(){
       return num1+num2;
       }
       
       int sub(){
           return num1-num2;
       }
    
    int mul(){
        return num1*num2;
    }
    float div_(){
        return num1/num2;
    }
};




int main (){
    
    float num1,num2;
    
    cout<<"Enter Number 1: "<<endl;
    cin>>num1;
    
    cout<<"Enter number 2:"<<endl;
    cin>>num2;
    
    Maths math(num1,num2);
    
    cout<<"Addition is :"<<math.add()<<endl;
    cout<<"Subtraction is :"<<math.sub()<<endl;
    cout<<"Multiplication is :"<<math.mul()<<endl;
    cout<<"Division is :"<<math.div_()<<endl;
    
    
    
    
}
