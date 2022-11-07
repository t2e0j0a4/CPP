#include <iostream>
using namespace std;

class Company{
    public :
        int id;
        void print_id(){
            cout << "Employee has id : "<<id << endl;
        }
};

class Complex{
    int a;
    int b;
    int A;
    int B;
    public :
        void complex_number(int value1, int value2){
            a = value1;
            b = value2; 
        }
        void Combination_of_Complex(Complex C1 , Complex C2){ // We can also pass the objects to the function params
            A = C1.a + C2.a;
            B = C1.b + C2.b;
            Final_Complex_Sum();
        }
        void Given_Complex_Numbers(){
            cout << "Given Complex Numbers is "<< a << "+" << b << "i" << endl;
        }
        void Final_Complex_Sum(){
            cout << "Sum of Given Complex Numbers is "<< A << "+" << B << "i" << endl;
        }
}Complex1 , Complex2 , Complex_Sum;

int main(){

    Company Employees[2]; // Creating a Array Consisting of Objects.
    for (int i = 0; i < 2; i++)
    {
        cout << "Enter Employee's Id : ";
        cin >> Employees[i].id;
        Employees[i].print_id();
    }

    cout << "----------------------------------------------------------" << endl;

    int a,b,c,d;

    cout << "Enter Real and Imaginary For Complex 1 : ";
    cin >> a >> b;

    Complex1.complex_number(a,b);
    Complex1.Given_Complex_Numbers();

    cout << "Enter Real and Imaginary For Complex 2 : ";
    cin >> c >> d;

    Complex2.complex_number(c,d);
    Complex2.Given_Complex_Numbers();

    Complex_Sum.Combination_of_Complex(Complex1 , Complex2);
    
    return 0;
}

/*
    Output Looks Like :-
     
        Enter Employee's Id : 1
        Employee has id : 1
        Enter Employee's Id : 2
        Employee has id : 2
        ----------------------------------------------------------
        Enter Real and Imaginary For Complex 1 : 23 32
        Given Complex Numbers is 23+32i
        Enter Real and Imaginary For Complex 2 : 98 89
        Given Complex Numbers is 98+89i
        Sum of Given Complex Numbers is 121+121i
*/