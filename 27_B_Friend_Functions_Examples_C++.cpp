#include <iostream>
using namespace std;

// Forward Declaration.
class B;

class A{
    int val1;
    friend void swapNumbers(A & , B &);
    public:
        void setNum(int val){
            val1 = val;
        }
        void showNum(){
            cout << val1 << endl;
        }
};

class B{
    int val2;
    friend void swapNumbers(A & , B &);
    public:
        void setNum(int val){
            val2 = val;
        }
        void showNum(){
            cout << val2 << endl;
        }
};

void swapNumbers(A &o1 , B &o2 ){ // Here we are using reference variables.
    int temp;
    temp = o1.val1;
    o1.val1 = o2.val2;
    o2.val2 = temp;
}


int main(){

    A a ; 
    B b ;

    a.setNum(25);
    b.setNum(75);

    cout << "The A Class a Object val1 before swap is : ";
    a.showNum();

    cout << "The B Class b Object val2 before swap is : ";
    b.showNum();

    swapNumbers(a,b);

    cout << "The A Class a Object val1 after swap is : ";
    a.showNum();

    cout << "The B Class b Object val2 after swap is : ";
    b.showNum();

    return 0;
}