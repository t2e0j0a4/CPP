#include <iostream>
using namespace std;

int main(){
    
    // Pointers is a kind of datatype used to store the address of the variable of same pointer datatype

    int array[10] = {1,2,3,4,5,6,7,8,9,10};

    // The first element of thar array address is the address of the array - Base Address of the Array.

    int* pointer = array ; // We can directly use variable name instead of &array

    cout << "Value in address of Pointer stored is : " << *pointer << endl; // 1

    // Pointer Arthimetic + - * /
    // pointer stored the address of the array - thats first element  address of array
    // new_address_of_pointer = (pointer + i) = old_address_of_pointer + i*(sizeof datatype)

    pointer = pointer + 1; // then we get as value in address stored by pointer is 2 , not 1

    cout << "Value in address of Pointer newly stored is : " << *pointer << endl; // 2  

    return 0;
}

/*
    Output Look like
    
    Value in address of Pointer stored is : 1
    Value in address of Pointer newly stored is : 2
*/