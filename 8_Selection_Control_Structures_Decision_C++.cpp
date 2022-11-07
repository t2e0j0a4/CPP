#include <iostream>
using namespace std;
int main(){
    int a = 10;

    // Simple if
    if (a == 10){ // if condition is true then enter block of code
        cout << "a value is " << a << endl;
    }

    // if - else
    if (a != 10){
        cout << "This is in 'if' block of code" << endl;
    }
    else {
        cout << "This is in 'else' block of code" << endl;
    }

    // if - else if - else
    if (a == 1){
        cout << "This is in 'if' block of code" << endl;
    }
    else if (a == 2){
        cout << "This is in '1 else if' block of code" << endl;
    }
    else if (a == 10){
        cout << "This is in '2 else if' block of code" << endl;
    }
    else {
        cout << "This is in 'else' block of code" << endl;
    }

    cout << endl;

    // switch - case

    int b;
    cout << "Enter b value : ";
    cin >> b;
    cout << endl;

    switch (b){
        case 1 : cout << "Value is 1" << endl;
        break;
        case 2 : cout << "Value is 2" << endl;
        break;
        case 3 : cout << "Value is 3" << endl;
        break;
        default : cout << "Value is not registered" << endl;
    }
    return 0;
}