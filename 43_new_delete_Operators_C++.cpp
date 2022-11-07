#include <iostream>
using namespace std;

int main(){
    // Generally we use 'new' and 'delete' operators for dynamically allocating memory location to variables that may also be contigous memory block.
    int* ptr = new int(900);
    cout << "The Value at ptr is : " << *ptr << endl;

    float* arr = new float[5];
    arr[0] = 1;
    arr[1] = 4;
    arr[2] = 9;
    arr[3] = 14;
    arr[4] = 19;
    cout << "The Value of arr[0] is : " << arr[0] << endl;
    cout << "The Value of arr[1] is : " << arr[1] << endl;
    cout << "The Value of arr[2] is : " << arr[2] << endl;
    cout << "The Value of arr[3] is : " << arr[3] << endl;
    cout << "The Value of arr[4] is : " << arr[4] << endl;
    delete[] arr;
    return 0;
}