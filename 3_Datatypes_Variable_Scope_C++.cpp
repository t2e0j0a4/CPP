// Datatypes
/*
    1. Built-in datatypes : 
        int , float , char , double , boolean-bool
    2. User-defined datatypes :
        like struct , enum , union
    3. Derived datatypes :
        like Arrays , Functions , Pointers 
 */


#include <iostream>
using namespace std;

int a_variable = 1000; // Global variable

void print_that_variable(){
    //  Here it uses global variable a_variable to give us the required output
    cout << "a_variable = " << a_variable << endl;
}

int main(){
    // Built-in datatypes
    int a = 100;
    float b = 10.001;
    char c = 'a';
    double d = 0.0000789;
    cout << "a = " << a << ";\nb = " << b << ";\nc = " << c << ";\nd = " << d << endl;

    // Variable Scope 
    /*
        1. Local variables - inside a function within a region of code and can be called within that only.
        2. Global variables - outside of every function and can be assessed to each and every function .
        precedence - local variable > global variable
        local and Global variables both can have same names
    */

    int a_variable = 100; // Local variable with same variable name
    cout << "a_variable = " << a_variable << endl;
    print_that_variable();
    return 0;
}