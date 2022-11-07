// What is a Pointers
// It is a type of datatypes which holds the address pf other variables

#include <iostream>
using namespace std;

int main(){

    // Pointers

    int a = 23978; // Variable Declaration

    int* p; // Pointer Declaration

    p = &a ; // p is storing address of variable a

    cout << "Address Assess 1 by variable (&a) will give : " << &a << endl;
    cout << "Address Assess 2 by pointer (p) will give : " << p << endl;

    // & -> (address of) Operator

    cout << "Value at address of a is value initialized to a : " << a << endl;
    cout << "Value at address of a is value initialized to a : " << *p << endl;

    // * -> (value at address of) Operator - Deference operator

    // Pointer to Pointers

    int** q; // Pointer to Pointers
    
    q = &p; // A pointer is stored in another Pointer.

    cout << "Address stored in q : " << q << endl; // p address
    cout << "Value stored in q : " << *q << endl; //  a address

    return 0;
}
