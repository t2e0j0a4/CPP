#include <iostream>
using namespace std;

class Table{
    int num;
    public:
        //  Construction declaration.
        Table(int val);

        // ------------------------------------- OR -------------------------------------

        /* 
            // Direct Construction Declarationa and Definition like :

            Table(void){
                num = 100;
            }
            
        */

        void numTable(int upto){
            for (int i=1 ; i<=upto ; i++){
                cout << num << " X " << i << " = " << num*i << endl;
            }
        }
};

// Default Constructor
/*
    Table :: Table(void){
        num = 5;
    } 
*/

// Parameterized Constructor
Table :: Table(int val){
    num = val;
}


int main(){
    // Table table1;

    // Implicit Parameters
    Table table1(6);
    table1.numTable(10);

    cout << endl;

    // Explicit Parameters
    Table table2 = Table(9);
    table2.numTable(10);

    return 0;
}