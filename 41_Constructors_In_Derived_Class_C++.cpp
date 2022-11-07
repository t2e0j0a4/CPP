#include <iostream>
using namespace std;

/*
    A -> Derived Class | B,C -> Base Classes

    Simple inheritence

    1. class A : public B {
        // Order of execution of constructors is B() then A()
    }

    Multiple Inheritence

    2. class A : public B , public C {
        // Order of execution of constructors is B() -> C() then A()
    }
    
    3. class A : public C , public B {
        // Order of execution of constructors is C() -> B() then A()
    }

    If Virtual Base Class exists

    4. class A : public B , virtual public C {
        // Order of execution of constructors is C() -> B() then A()
        // Always constructor of virtual base class executes first.
    }

*/

class B{
    int data1;
    public:
        B(int num){
            data1 = num;
            cout << "B's Constructor Called"<<endl;
        }
        void showB(){
            cout << "B is " << data1 <<endl;
        }
};

class C{
    int data2;
    public:
        C(int num){
            data2 = num;
            cout << "C's Constructor Called"<<endl;
        }
        void showC(){
            cout << "C is " << data2 <<endl;
        }
};

// Multiple Inheritence

class A : public B , public C {
    int a1,a2;
    public:
        A(int a,int b,int c,int d) : B(c) , C(d){
            a1 = a;
            a2 = b;
            cout << "A's Derived Class Construtor Called"<<endl;
        }
        void showA(){
            cout << "A a1 is " << a1 <<endl;
            cout << "A a2 is " << a2 <<endl;
        }
};

int main(){

    A obj(1,2,3,4);
    obj.showB();
    obj.showC();
    obj.showA();
    
    return 0;
}