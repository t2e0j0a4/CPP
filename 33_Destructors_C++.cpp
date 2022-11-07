#include <iostream>
using namespace std;

class Mama{
    static int count;
    public:
        // Constructor
        Mama(){
            cout << "Constructor Invoked for obj m" << count << endl;
            count++;
        }
        // Destructor
        ~Mama(){
            count--;
            cout << "Destructor Invoked for obj m" << count << endl;
        }
};

int Mama :: count = 1;

int main(){
    cout << "Main Function"<<endl;
    cout << "Created m1 Obj" << endl;
    Mama m1;
    {
        cout << "Entering Block where m2 obj created." << endl;
        cout << "Created m2 Obj" << endl;
        Mama m2;
        cout << "Exiting Block where m2 obj created."<<endl;
    }
    cout << "Completed our Programm with m1 obj too."<<endl;
    
    return 0;
}


/*
    Output Looks Like :

        Main Function
        Created m1 Obj
        Constructor Invoked for obj m1
        Entering Block where m2 obj created.
        Created m2 Obj
        Constructor Invoked for obj m2
        Exiting Block where m2 obj created.
        Destructor Invoked for obj m2
        Completed our Programm with m1 obj too.
        Destructor Invoked for obj m1
*/

/*
    Here,
        1. There is no need to write code for invoking the desctructor as it is automatically invoked when there is no need of that object any more.
        2. ~ before constructor represents it as a destructor. 
*/