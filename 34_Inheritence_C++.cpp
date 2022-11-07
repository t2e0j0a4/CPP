#include <iostream>
using namespace std;

class A{
    int a;
    public:
        int b;
        A(){
            a = 0;
            b = 0;
        }
        A( int n1, int n2 ){
            a = n1;
            b = n2;
        }
        void data(){
            cout << "It's Base Data." << endl;
        }
};

// Syntax for Inheriting a class.
/*
    class <Derived_Class_Name> : <Visiblity_Mode> <Base_Class_Name> {
        // Code
    }

    Here , Visiblity Mode plays a key role .
    1. Default if you not mention any mode then visiblity mode is private.
    2. if it is private then base class public members will inherited as private members to derived class. 
    3. if it is public then base class public members will inherited as public members to derived class.
    4. Can't Inherit Base class private any way.
*/

class B : private A {
    public : 
        int c;
        B(){
            c = 0;
        }

        void set_b(int num1){
            b = num1;
        }
        void get_b_data(){
            data();
            cout  << "b : " << b << endl;
        }
};

class C : public A {
    public :
        int d;
        C(){
            d = 0;
            b = 100;
        }
};
 

int main(){

    A a1,a2;
    a1 = A(1,2);
    a2 = A(3,4);

    B b1;
    b1.set_b(10);
    b1.get_b_data();

    C c1;
    cout << c1.b << endl;
    c1.data();
    
    return 0;
}