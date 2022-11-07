#include <iostream>
using namespace std;

class Base1
{
    int a;

public:
    void setShow(int n1)
    {
        a = n1;
        cout << "a : " << n1 << endl;
    }
};

class Base2
{
    int b;

public:
    void setshow(int n2)
    {
        b = n2;
        cout << "b : " << n2 << endl;
    }
};

class Derived : public Base1 , public Base2 {
    public:
        void show(){
            cout << "Derived!" <<endl;
        }
};

int main()
{

    Derived obj;
    obj.setShow(10);
    obj.setshow(9);
    obj.show();

    return 0;
}