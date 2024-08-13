#include <iostream>
using namespace std;
class Math{
    public:
    int sum(int a, int b){
        return a + b;
    }
    int sum(int a, int b, int c){
        return a + b + c;
    }
    
    int sub(int a, int b){
        return a-b;
    }
    
    int mul(int a, int b){
        return a*b;
    }
    
    double divi(int a, int b){
        return a/b;
    }
};
int main() {
    Math m;
    cout<<m.sum(10, 20, 30)<<endl;
    cout<<m.sub(50,30)<<endl;
    cout<<m.mul(20,50)<<endl;
    cout<<m.divi(50,20)<<endl;
    return 0;
}
