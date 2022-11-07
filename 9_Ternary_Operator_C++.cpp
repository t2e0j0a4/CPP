#include <iostream>
using namespace std;
int main() {
    
    int a , b;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;

    // Ternery Operator ? : is very important and works same as if else statement and also convinient to write in a singke line
    a+b == 10 ? cout << "The Sum is 10" << endl : cout << "The Sum is other than 10"<< endl;
    return 0;
}