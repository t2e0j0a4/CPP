#include <iostream>
using namespace std;

class Number{
    int num;
    public :

        // Declaration of Friend Function and there is no relation with this function and class . And we are writing this because be need private members assess from this class with class permission .
        friend Number Sum(Number n1 , Number n2);

        void setNumber(int a){
            num = a;
        }
        void printNumber(){
            cout << "Number is " << num << endl;
        }
};

// Definition of friend function
Number Sum(Number n1 , Number n2){
    Number n3;
    n3.setNumber(n1.num+n2.num);
    return n3;
}

int main(){
    Number n1 , n2 , sum;
    int a,b;
    cout << "Enter Values fro sum a,b : ";
    cin >> a >> b;
    n1.setNumber(a);
    n1.printNumber();

    n2.setNumber(b);
    n2.printNumber();

    sum = Sum(n1,n2); // Calling a friend function and since that is return a object we are creating a object to store it .
    sum.printNumber();
    return 0;
}


// Friend Function Properties
    /*
        1.Not in the scope of class.
        2.It can't be assessed by any object of class.
        3.Usually contains args as objects.(Mostly)
        4.Can be declared in public or private part of class.
    */