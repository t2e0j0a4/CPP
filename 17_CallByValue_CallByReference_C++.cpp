#include <iostream>
using namespace std;

// Call by Value
int sum_of_two_numbers(int a, int b) {
    return a+b;
}

// Call by reference
int swap(int* a , int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

// Reference Variable
int reference_variable(int &a, int &b) {
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(){
    int num1 , num2 ;
    cout << "Enter num1 : " ;
    cin >> num1;
    cout << "Enter num2 : " ;
    cin >> num2;

    // Call by Value
    cout << "The Sum of " << num1 << " and " << num2 << " is : " << sum_of_two_numbers(num1, num2) << endl;

    // Call by reference
    cout << "Before Swap num1 is " << num1 << " and num2 is " << num2 << endl;
    swap(num1, num2);
    cout << "After Swap num1 is " << num1 << " and num2 is " << num2 << endl;

    // By Reference Variables
    int num3 = 10;
    int num4 = 30;
    cout << "Before Swap num3 is " << num3 << " and num4 is " << num4 << endl;
    reference_variable(num3, num4);
    cout << "After Swap num3 is " << num3 << " and num4 is " << num4 << endl;
    return 0;
}