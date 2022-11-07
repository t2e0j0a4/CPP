#include <iostream>

using namespace std;

int main() {
    int a = 100;
    float b = float(a); // can write like this also as float b = (float)a
    cout << a << " " << b << endl;
    cout << endl;
    float x = 10.0993;
    int y = (int)x; // 10 as Converted to integer
    cout << "x = " << x << endl << "y = " << y << endl;
    return 0;
}


// Type Casting
/*
    It is a method of changing a variable datatype from one to another
    like from int to float
*/

/*
    Output look like
    
    100 100

    x = 10.0993
    y = 10
*/