#include <iostream>
using namespace std;

// User defined Functions
// Used for resusablity of code also maintaing it properly and memory management like not writing sam code many times.

/*
    Syntax : 

    return_type function_name(params){
    
        return return_value;
    }

*/

// Function prototype for difference_of_two_numbers function

int difference_of_two_numbers(int a, int b); // Acceptable
// int difference_of_two_numbers(int a,b); // Not Acceptable
// int difference_of_two_numbers(int , int); // Acceptable


// Function Definition
int sum_of_two_numbers(int a , int b) {
    return a + b;
}

int main(){
    int num1 , num2;
    cout << "Enter num1 : ";
    cin >> num1;
    cout << "Enter num2 : ";
    cin >> num2;
    cout << sum_of_two_numbers(num1, num2); // Function Calling

    return 0;
}

// If you are defining the function out of function calling scope then you can make a prototype of that function like after pre-processor is good
/*
    Syntax : 

    return_type function_name(params);
    Ex : 

    int sum_of_two_numbers(int num1, int num2);
*/


// Since this function is out of function calling scope then you can make a prototype of that function like after pre-processor is good
int difference_of_two_numbers(int a, int b) {
    return a - b;
} 