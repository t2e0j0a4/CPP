#include <iostream>
using namespace std;

// Usage of inline functions
/*
    Inline functions are usage when we have a minimal number of lines of code (atmost 5) and Recursive are allowed for inline functions .
*/

inline int add(int a , int b , int c){
    return a+b+c;
}

// static variables don't change their values but helps in updation of value for every call.

int update(){
    static int num = 0;
    num = num + 1;
    cout << "Num is : " << num << endl;
    return 0;
}

int main(){
    int x,y,z;
    cout << "Enter Values for X , Y , Z : ";
    cin >> x >> y >> z ;
    cout << "The Sum of " << x << " " << y << " " << z << " is : " << add(x,y,z);

    cout << endl ;

    for (int i=0 ; i<10 ; i++){
        update();
    }
    
    return 0;
}