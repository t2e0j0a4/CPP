#include <iostream>
using namespace std;

class A{
    private:
        int a;
    protected:
        int b;
    public:
        int c;
        A(){
            a = 10;
            b = 20;
            c = 30;
        }
};

class B : protected A{
    public:
        void set_b(){
            b = 100;
        }
        void get_b(){
            cout << b;
        }
};

int main(){
    B b;
    b.set_b();
    b.get_b();
    return 0;
}