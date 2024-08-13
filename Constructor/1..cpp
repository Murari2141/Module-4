#include <iostream>
using namespace std;
 
 inline int multi(int a, int b){
 return (a*b);
 }
 
 inline int cubic(int a){
     return (a*a*a);
 }

int main() {
    
    int num1,num2;
    
    cout<<"Enter Number 1 :"<<endl;
    cin>>num1;
    
    cout<<"enter Number 2: "<<endl;
    cin>>num2;
    
    cout<<"Multiplication of "<<num1<<" and "<<num2<<" is :"<<multi(num1,num2)<<endl;
    
    cout<<"Cubic of  "<<num1<<" is :"<<cubic(num1)<<endl;
    cout<<"Cubic of  "<<num2<<" is :"<<cubic(num2)<<endl;
    
    
    
    return 0;
}
