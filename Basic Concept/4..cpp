// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
  
  class Rectangle{
      public :
      
  float l,w;
  
   void getvalue(){ 
    cout<<"Enter the length value :"<<endl;
    cin>>l;
    cout<<"Enter the Value of Width :"<<endl;
    cin>>w;
   }
  void area(){
      cout<<"circle radius is : "<<l*w<<endl;
  }
  void perimeter(){
      cout<<"circle circumference is :"<<2*(l+w)<<endl;
  }
  
};
int main() {
    
    Rectangle rec1;
    
    rec1.getvalue();
    rec1.area();
    rec1.perimeter();

    return 0;
}
