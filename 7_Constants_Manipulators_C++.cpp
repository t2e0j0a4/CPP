#include <iostream>

#include <iomanip>

using namespace std;

int main(){
    //  Using Constants you can never change the variable you assigned to a value
    const int a = 100;
    // a = 1000; // Will give you a error message

    // Manipulators will help in formatting the display on output screen
    /*
        1. endl -> Formats to a new line
        2. setw() -> allows to  set width of display autput but to use this function must include iomanip header file.
    */

    cout << "The Value of a is : " << setw(5) << a << endl;

    return 0;
}