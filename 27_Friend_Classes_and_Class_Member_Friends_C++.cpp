#include <iostream>
using namespace std;

class Complex;

class Calculate{
    public :
        int sumRealComplex(Complex ,Complex );
        int sumImagComplex(Complex ,Complex );
};

class Complex{
    int a,b;
    public :

        friend int Calculate :: sumImagComplex(Complex c1 , Complex c2);
        friend int Calculate :: sumRealComplex(Complex c1 , Complex c2);

        // friend class Calculate; // Here we are giving full assess to Complete Calculate Class .
        void setNumbers(int n1 , int n2){
            a = n1 ;
            b = n2 ;
        }
        void printNumbers(){
            cout << "The Complex Number is " << a << " + " << b << "i" << endl;
        }
};

int Calculate :: sumRealComplex(Complex c1 , Complex c2){
    int realSum = c1.a+c2.a;
    return realSum;
}

int Calculate :: sumImagComplex(Complex c1 , Complex c2){
    int imagSum = c1.b+c2.b;
    return imagSum;
}



int main(){

    Complex c1 , c2;
    c1.setNumbers(1,2);
    c1.printNumbers();

    c2.setNumbers(3,4);
    c2.printNumbers();

    Calculate sum;
    int realSum = sum.sumRealComplex(c1,c2);
    int imagSum = sum.sumImagComplex(c1,c2);

    Complex c3;
    c3.setNumbers(realSum,imagSum);
    c3.printNumbers();
    
    return 0;
}