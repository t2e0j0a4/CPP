#include <iostream>
using namespace std;


// Class
class Bank{
    private : // Private means only upto class.
        int cash;
    public : // Public means everywhere.
        int totalDeposites;
        void money(int depoCash);
        void getMoney(){
            cout << "Total money in Bank " << cash + totalDeposites ;
        }
};

void Bank :: money(int depoCash) {
    cash = depoCash;
}

int main(){
    // Object for Bank
    Bank icici ; // We can create no of objects we want.

    // icici.cash = 100; //Throws error since it is private variable and up to class

    icici.totalDeposites = 1986300; // Assessing Class attributes and methods with object  named icici .
    icici.money(12030); // Assessing Class attributes and methods with object  named icici .
    icici.getMoney(); // Assessing Class attributes and methods with object  named icici .

    return 0;
}