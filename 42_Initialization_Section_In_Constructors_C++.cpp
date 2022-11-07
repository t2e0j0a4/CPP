#include <iostream>
using namespace std;

/*
    class class_name {
        variables declaration
        public :
            // constructor
            class_name() : initialization_section{
                constructor body
            }
    }

    // Here Generally We use Initialization sec if we have very complex constructor.
*/

class Class{
    int data1,data2;
    public:
        // Class(int a , int b) : data1(a) , data2(b) // Will Work
        // Class(int a , int b) : data2(a) , data1(b) // Will Work
        Class(int a , int b) : data1(a) , data2(a+b) // Will Work
        {   
            // Our General Method
            // data1 = a;
            // data2 = b;

            cout << "Constructor Called" << endl;
            cout << "data1 : " << data1 << " and data2 is : " << data2 << endl;
        }
};

int main(){
    Class c1(1,2);
    return 0;
}