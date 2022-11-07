// There are 2 types of header files can be included in your c++ programm 
/*
    1. Built-in header files like <iostream>
        #include <iostream>
    2. user define header files like file.h
        #include <file.h>
*/

#include <iostream>
#include "5_File_C++.h" // Will give an error if file doesn't exist in current working directory .
using namespace std;

int main() {
    cout << "This is a C++ program\n";
    int sum_of_two_numbers = addition(1,2);
    int difference_of_two_numbers = subtract(1,2);
    int product_of_two_numbers = multiply(1,2);
    int division_of_two_numbers = division(1,2);
    cout << "Sum of two numbers is : " << sum_of_two_numbers << endl;
    cout << "Difference of two numbers is : " << difference_of_two_numbers << endl;
    cout << "Product of two numbers is : " << product_of_two_numbers << endl;
    cout << "Division of two numbers is : " << division_of_two_numbers << endl;
    return 0;
}