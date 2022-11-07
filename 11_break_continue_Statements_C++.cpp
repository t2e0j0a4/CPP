#include <iostream>
using namespace std;

int main(){

    for (int i = 1; i < 50; i++)
    {
        if ( i == 47){
            break;
        }
        if ( i > 23 && i < 30){
            continue;
        }
        cout << "The Value of i is " << i << endl;
    }
    

    return 0;
}


/*
    break ,continue statements used in any Loop 
    break statement used to stop the ongoing loop and exit from it
    whereas continue statement helps to pass one of the following iteration
    Both are based on conditions 
*/

/*
    Output Look like

    The Value of i is 1
    The Value of i is 2
    The Value of i is 3
    The Value of i is 4
    The Value of i is 5
    The Value of i is 6
    The Value of i is 7
    The Value of i is 8
    The Value of i is 9
    The Value of i is 10
    The Value of i is 11
    The Value of i is 12
    The Value of i is 13
    The Value of i is 14
    The Value of i is 15
    The Value of i is 16
    The Value of i is 17
    The Value of i is 18
    The Value of i is 19
    The Value of i is 20
    The Value of i is 21
    The Value of i is 22
    The Value of i is 23

    Here after 23 and before 30 all iterations are passed not executed

    The Value of i is 30
    The Value of i is 31
    The Value of i is 32
    The Value of i is 33
    The Value of i is 34
    The Value of i is 35
    The Value of i is 36
    The Value of i is 37
    The Value of i is 38
    The Value of i is 39
    The Value of i is 40
    The Value of i is 41
    The Value of i is 42
    The Value of i is 43
    The Value of i is 44
    The Value of i is 45
    The Value of i is 46

    Here where from 47 exited from Loop

*/