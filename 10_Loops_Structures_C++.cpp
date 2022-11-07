#include <iostream>
using namespace std;
int main () {

    // for Loop

    for (int i = 0; i < 10; i++)
    {
        cout << i << " ";
    }
    
    cout << endl;

    // while Loop

    int a = 100;
    int i = 1;
    while (i <= 10){
        cout << a << " * " << i << " = " << a*i << endl;
        i++;
    }

    cout << endl;

    // do while Loop

    int b;
    cout << "Enter b value : ";
    cin >> i ;
    
    do {
        cout << "i = " << i << endl;
        i--;
    }
    while (i >= 10);
    
    return 0;
}


/*
    Loops 
    1. for Loop
        if you know no:of iterations then youcan use for loop

        Syntax : 
        for (initialization , condition , updation){
            Block of code to run for each iteration
        }

    2. while Loop
        if you know condition then you can use while loop

        Syntax :
        initialization
        while (condition) {
            Block of Code to run for each iteration
            updation
        } 

    3. do while Loop
        same as while Loop but if condition is not true also code runs once

        Syntax : 
        initialization
        do {
            Block of Code
            updation
        }
        while (condition)

    Also try to avoid infinite loop condition so that there is no disturbance in memory
*/

/*
    1st Output Look like
    
    0 1 2 3 4 5 6 7 8 9 
    100 * 1 = 100
    100 * 2 = 200
    100 * 3 = 300
    100 * 4 = 400
    100 * 5 = 500
    100 * 6 = 600
    100 * 7 = 700
    100 * 8 = 800
    100 * 9 = 900
    100 * 10 = 1000

    Enter b value : 10
    i = 10


    2nd Output Look like

    0 1 2 3 4 5 6 7 8 9 
    100 * 1 = 100
    100 * 2 = 200
    100 * 3 = 300
    100 * 4 = 400
    100 * 5 = 500
    100 * 6 = 600
    100 * 7 = 700
    100 * 8 = 800
    100 * 9 = 900
    100 * 10 = 1000

    Enter b value : 30
    i = 30
    i = 29
    i = 28
    i = 27
    i = 26
    i = 25
    i = 24
    i = 23
    i = 22
    i = 21
    i = 20
    i = 19
    i = 18
    i = 17
    i = 16
    i = 15
    i = 14
    i = 13
    i = 12
    i = 11
    i = 10
*/