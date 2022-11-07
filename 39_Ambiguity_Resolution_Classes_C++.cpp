#include <iostream>
using namespace std;

class A{
    public:
        void display(){
            cout << "A : display" << endl;
        }
};

class B {
    public :
        void display(){
            cout << "B : display" << endl;
        }
};

class C : public A , public B {
    public:
        void show(){
            cout << "C : Derived" << endl;
        }

        // See this
        void display(){
            A::display(); // ambiguity resolution. 
            // OR
            // B::display();
        }
};

// Another Ambiguuity Resolution takes inbuilt as -
    /*
        If you have a function in base class and same name function in derived class then function of derived class will be overwritten by base class when you inherited and created a derived class object.
    */

int main(){

    C c;
    c.show();
    c.display();
    
    return 0;
}