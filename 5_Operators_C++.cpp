#include <iostream>
using namespace std;
int main() {
    int a = 10, b = 5;
    // Operators
    // 1.Arthimetic Operators +,-,*,/,%

    cout << "Arthimetic Operators" << endl;
    cout << "Sum of a , b = " << a+b << endl;
    cout << "Difference of a , b = " << a-b << endl;
    cout << "Product of a , b = " << a*b << endl;
    cout << "Quotient of a , b = " << a/b << endl;
    cout << "Remainder of a , b = " << a%b << endl;
    cout << endl;

    // 2. Comparision Operators ==,!=,>,<,>=,<=

    cout << "Comparision Operators" << endl;
    cout << "Comparision of a , b by '==' will return " << (a==b) << endl; 
    cout << "Comparision of a , b by '!=' will return " << (a!=b) << endl; 
    cout << "Comparision of a , b by '>=' will return " << (a>=b) << endl; 
    cout << "Comparision of a , b by '<=' will return " << (a<=b) << endl; 
    cout << "Comparision of a , b by '<' will return " << (a<b) << endl; 
    cout << "Comparision of a , b by '>' will return " << (a>b) << endl; 
    cout << endl;

    // 3. Assignment Operators '=' -> += ,-= , so on...

    cout << "Assignment Operators" << endl;
    int a_variable = 10; // Here '=' is the assignment operator

    cout << "a_variable = " << a_variable << endl;
    a_variable += 100; // '+=' is like a = a+100 
    cout << "a_variable = " << a_variable << endl;
    a_variable -= 100; // '-=' is like a = a-100
    cout << "a_variable = " << a_variable << endl;
    // Similary we have for every operator we can form assignment operators like *= , /= , %= etc... 
    cout << endl;

    // 4. Logical operators && ,|| , ! 

    cout << "Logical Operators" << endl;
    cout << "Logical Operator '&&' btw (a==b) && (a!=b) is " << ((a==b)&&(a!=b)) <<endl;
    cout << "Logical Operator '||' btw (a==b) || (a!=b) is " << ((a==b)||(a!=b)) <<endl;
    cout << "Logical Operator '!' for !(a==b) is " << (!(a==b)) <<endl;
    cout << endl ;

    // 5. Bitwise Operators &,|,^,~
        /* 
            Left shift '<<'
            Right shift '>>'
        */
        // Also while your bitwise operators precedence will be from right to left 
    
    cout << "Bitwise Operators" << endl;
    cout << "Bitwise a&b gives " << (a&b) << endl;
    cout << "Bitwise a|b gives " << (a|b) << endl;
    cout << "Bitwise a^b gives " << (a^b) << endl;
    cout << "Bitwise ~a , ~b gives " << (~a) << " " << (~b) << endl;
    cout << "Left Shift of 2 Bits in 'a' like a<<2 gives " << (a<<2) << endl;
    cout << "Right Shift of 2 Bits in 'b' like b>>2 gives " << (b>>2) << endl;
    cout << endl;

    // Increment , Decrement Operators ++ ,-- 
        /*
            like a++ , a-- are post increment and post decrement operators
            And ++a , --a are pre increment and pre decrement operators
        */
    int variable = 10;
    cout << "Increment and Decrement Operators" << endl;
    cout << "Initially variable is " << variable << endl;
    cout << "Post Increment like variable++ gives " << (variable++) << endl;
    cout << "Post Decrement like variable-- gives " << (variable--) << endl;
    cout << "Pre Increment like ++variable gives " << (++variable) << endl;
    cout << "Pre Decrement like --variable gives " << (--variable) << endl;
    cout << "Finally variable is " << variable << endl;

    return 0;
}


// Output look like 
/*
    Arthimetic Operators
    Sum of a , b = 15
    Difference of a , b = 5
    Product of a , b = 50
    Quotient of a , b = 2
    Remainder of a , b = 0

    Comparision Operators
    Comparision of a , b by '==' will return 0
    Comparision of a , b by '!=' will return 1
    Comparision of a , b by '>=' will return 1
    Comparision of a , b by '<=' will return 0
    Comparision of a , b by '<' will return 0
    Comparision of a , b by '>' will return 1

    Assignment Operators
    a_variable = 10
    a_variable = 110
    a_variable = 10

    Logical Operators
    Logical Operator '&&' btw (a==b) && (a!=b) is 0
    Logical Operator '||' btw (a==b) || (a!=b) is 1
    Logical Operator '!' for !(a==b) is 1

    Bitwise Operators
    Bitwise a&b gives 0
    Bitwise a|b gives 15
    Bitwise a^b gives 15
    Bitwise ~a , ~b gives -11 -6
    Left Shift of 2 Bits in 'a' like a<<2 gives 40
    Right Shift of 2 Bits in 'b' like b>>2 gives 1

    Increment and Decrement Operators
    Initially variable is 10
    Post Increment like variable++ gives 10
    Post Decrement like variable-- gives 11
    Pre Increment like ++variable gives 11
    Pre Decrement like --variable gives 10
    Finally variable is 10
*/