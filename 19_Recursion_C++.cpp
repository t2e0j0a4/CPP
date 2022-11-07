#include <iostream>
using namespace std;

// Recursive Funtion is a type of function which call itself in function block of code.And write correctly when writing it may leed to infinite call.

int fact(int num){
    if (num <= 1){
        return 1;
    }
    return num * fact(num-1);

    return 0;
}

int main(){
    int num;
    cout << "Enter num : ";
    cin >> num ;
    cout << fact(num) << endl;
    return 0;
}