#include <iostream>
using namespace std;

int main(){
    // Array Declaration and Initialization

    // 1st Type
    int count[] = {0,1,2,3,4,5,6,7,8};

    // 2nd Type
    int marks[3];
    marks[0] = 10;
    marks[1] = 20;
    marks[2] = 30;

    for (int i = 0; i < 3; i++) {
        cout << "Marks are " << marks[i] << endl;
    }

    /*****************************************/

    int mathMarks[10];

    for (int i = 0; i < 10; i++) {
        cout << "Enter Marks for index at " << i << " : ";
        cin >> mathMarks[i];
    }

    for (int i = 0; i < 10; i++) {
        cout << "Marks are "<< mathMarks[i] << endl;
    }

    return 0;
}

// In Arrays index starts from 0.