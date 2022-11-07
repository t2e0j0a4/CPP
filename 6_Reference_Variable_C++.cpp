#include <iostream>
using namespace std;

int main()
{
    // Let's take variable as 'a' and assign value 10 
    int a = 10;
    // Now Reference Variable is like
    int &b = a;
    // Here b is the Reference Variable.
    cout << "a = " << a << endl << "b = " << b << endl; // 10 10
    b = 20;
    cout << "a = " << a << endl << "b = " << b << endl; // 20 20
    a = 30;
    cout << "a = " << a << endl << "b = " << b << endl; // 30 30
    return 0;
}
