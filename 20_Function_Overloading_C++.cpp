#include <iostream>
using namespace std;

// Function Overloading

int add(int a , int b){
    return a+b;
}

int add(int a , int b , int c){
    return a+b+c;
}

int main(){
    cout << "The sum of 3 and 4 is " << add(3,4) << endl;
    cout << "The sum of 3 , 5 and 4 is " << add(3,5,4) << endl;
    return 0;
}