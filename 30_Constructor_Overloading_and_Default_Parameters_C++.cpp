#include <iostream>
using namespace std;

class X{
    int a;
    int b;
    int c;
    public :
        X(int n1 , int n2 , int n3){
            a = n1;
            b = n2;
            c = n3;
            cout << "Contructor with 3 args taken and 0 default."<<endl;
        }
        X(int n1 , int n2){
            a = n1;
            b = n2;
            c = 10;
            cout << "Contructor with 2 args taken and 1 default."<<endl;
        }
        X(int n1){
            a = n1;
            b = 8;
            c = 10;
            cout << "Contructor with 1 args taken and 2 default."<<endl;
        }
};

class Y{
    int a;
    int b;
    public :
        Y(int n1, int n2 = 112){ // Constructor with default parameters like n2 = 112
            a = n1;
            b = n2;
        }
        void printData(){
            cout << "a is "<<a<<" and b is "<< b << "." << endl;
        }
};

int main(){

    X x1(1,2,3);
    X x2(1,2);
    X x3(1);


    Y y1(100,200);
    y1.printData();
    Y y2(100);
    y2.printData();

    return 0;
}