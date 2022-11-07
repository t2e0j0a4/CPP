
#include <iostream>
using namespace std;

int main() {
    
    int number1;

    cout << "Enter The Value of number1 : ";
    // '<<' is called insertion operator , which will insert the data from main memory to our output device.
    cin >> number1;
    // '>>' is called extraction operator , which will extract the data from the input device to the main memory.

    cout << "The Value of entered by user is : " << number1 ;

    return 0;
}