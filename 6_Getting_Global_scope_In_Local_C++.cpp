#include <iostream>
using namespace std;

// Global Region
int variable = 500; // Global scope of variable 

int main()
{
    // Local Region
    int variable = 100; // Local scope of variable
    cout << "Varible in Local Region is like 'variable' = " << variable << endl; // 100
    cout << "Varible in Global Region is like 'variable' = " << ::variable << endl; // 500
    
    // Here '::' is called Scope Resolution Operator - Gives Global scope of variable

    return 0;
}
