#include <iostream>
using namespace std;

class Table{
    int num;
    public:
        //  Construction declaration.
        Table(void);

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

// Constructor Definition here ; And you can also give directly there itself self definition of constuctor .

Table :: Table(void){
    num = 5;
}

// Generally we create constructor if we consider that for each object of Class there reoresents same properties and no change .

int main(){
    Table table1;
    table1.numTable(10);

    return 0;
}


/*
    About Constructor
        1. It should be declare in public section of class.
        2. Whenever the object is created they are automatically invoked.
        3. Do not have any return types (not even void).
        4. We can't refer to their address.
        5. Name of constructor should be same as it's class. that's why it runs automatically.
        6. Can have default args.
*/