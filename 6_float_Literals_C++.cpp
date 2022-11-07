#include <iostream>
using namespace std;
int main() {
    
    // Literals - float , double , long double

    float f = 1.01; // It will actually consider as double 
    cout << "Size of f 1.01 is " << sizeof(f) << endl; // 4

    float e = 1.01f; // It will actually take as double 
    cout << "Size of e 1.01f is " << sizeof(e) << endl; // 4 // Can also be f or F

    double d = 1.001;
    cout << "Size of d 1.001 is " << sizeof(d) << endl; // 8

    long double l = 2.09;
    cout << "Size of l 2.09 is " << sizeof(l) << endl; // 12

    l = 2.09l;
    cout << "Size of l 2.09l is " << sizeof(l) << endl; // 12 // can also be l or L

    return 0;
}

/*
    Output Look like
    
    Size of f 1.01 is 4
    Size of e 1.01f is 4
    Size of d 1.001 is 8
    Size of l 2.09 is 12
    Size of l 2.09l is 12
*/