#include <iostream>
using namespace std;

class A{
    public :
        int a;
        void showMe(){
            cout << "Base Class : A" << endl;
        }
};

class X : public A{
    public:
        void set_a(int num){
            a = num;
        }
        void show(){
            cout << "Derived Class : X" << endl;
        }
};

class Y : private A{
    public:
        void set_a(int num){
            a = num;
        }
        void get_a(){
            showMe();
            cout << "Y - a : " << a << endl;
        }
        void show(){
            cout << "Derived Class : Y" << endl;
        }
};

int main(){

    X x;
    x.showMe();
    x.set_a(10);
    cout << "X - a : " << x.a << endl;
    x.show();

    Y y;
    // y.showMe(); // Will show error as inherited as private.
    y.set_a(100);
    y.get_a();
    y.show();
    
    return 0;
}


/*
    Output Look Like :
    
        Base Class : A
        X - a : 10
        Derived Class : X
        Base Class : A
        Y - a : 100
        Derived Class : Y
*/