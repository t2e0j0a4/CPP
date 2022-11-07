#include <iostream>
using namespace std;

class X{
    int a;
    public:
        X(){
            a = 0;
        };
        X(int n1){
            a = n1;
        }
        void display(){
            cout << "The Number is " << a << endl;
        }
        // copy constructor
        X(X &obj){
            a = obj.a;
            cout << "This is a Copy Constructor."<<endl;
        }
};

int main(){
    X x1,x2 ,  x4; // Here x4 is already a declared object so there is no run of copy constructor if we used down.
    
    x1.display();
    
    x2 = X(9);
    x2.display();

    // X x3 = X(x1); // Inbuilt Compilers Copy Constructor will invoke as there is no copy constructor built up
    // x3.display();

    // After the Above execution we have made a copycontructor above.
    // So , 
    X x3;
    x3 = X(x1); // Here where our copy constructor will invoke.
    x3.display();   

    x4 = x1; // Here no invokement of copy constructor.
    x4.display(); 

    X x5 = x1; // Here invokement of copy constructor.
    x5.display();
    
    return 0;
}