//3. circle radius and circumference
#include <iostream>
using namespace std;
  
  class Circle{
      public :
      
  float pie = 3.14,r;
  
   void getvalue(){ 
    cout<<"Enter the R value :"<<endl;
    cin>>r;
   }
  void radius(){
      cout<<"circle radius is : "<<pie*r*r<<endl;
  }
  void circum(){
      cout<<"circle circumference is :"<<2*pie*r<<endl;
  }
  
};
int main() {
    
    Circle circle1;
    
    circle1.getvalue();
    circle1.radius();
    circle1.circum();

    return 0;
}
