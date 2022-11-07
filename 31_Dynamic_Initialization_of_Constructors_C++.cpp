#include <iostream>
using namespace std;

class A{
    int a;
    int b;
    public:
        A(){} // Constructor(1)
        A(int n1,int n2){
            a = n1;
            b = n2;
        }
        A(int n1){
            a = n1;
            b = 10;
        }
        void printNums(){
            cout << "Numbers are " << a << " and " << b << endl;
        }
};

int main(){

    A a1,a2,a3; // When we first create these object a constructor(1) is alloted to them and as the parameters are varying down their dynamically new constructors are initialized.

    a1 = A(1,2); // Dynamically Initialized a new Constructor on run time.
    a1.printNums();
    a2 = A(2); // Dynamically Initialized a new Constructor on run time.
    a2.printNums();

    a3.printNums();

    
    return 0;
}