#include <iostream>
using namespace std;

class A{
    int a,b;
    public:
        void setData(int num1, int num2){
            a = num1;
            b = num2;
        }

        void getData(){
            cout << "The Value of a : " << a << endl;
            cout << "The Value of b : " << b << endl;
        }
};

int main(){

    // Pointer to Objects
    A obj;
    A *ptr = &obj;
    // Remember to use paranthesis as '.' has more precedence than '*' , so if you dont use you may get some error.
    (*ptr).setData(1,2);
    
    // (*ptr).getData();
    // Here can also use arrow operator like this. Here -> will deference the pointer and use methods like below.
    ptr -> getData();

    
    return 0;
}