#include <iostream>
using namespace std;

class Base {
    int num1;
    public:
        void set_num(int n){
            num1 = n;
        }
        void print_num(){
            cout << "num1 : " << num1 << endl;
        }

};

class Der1 : virtual public Base {
    int num2;
    public:
        void set_num_1(int n){
            num2 = n;
        }
        void print_num_1(){
            cout << "num2 : " << num2 << endl;
        }
};

class Der2 : virtual public Base {
    int num3;
    public:
        void set_num_2(int n){
            num3 = n;
        }
        void print_num_2(){
            cout << "num3 : " << num3 << endl;
        }
};

class Final : public Der1 , public Der2 {
    
    public:
        void display(){

            cout << "Base : ";
            print_num(); // This will be ambiguity if they are not virtual base classes.

            cout << "Der1 : ";
            print_num_1();
            cout << "Der2 : ";
            print_num_2();
        }
};

int main(){
    Final f1;
    f1.set_num(100);
    f1.set_num_1(90);
    f1.set_num_2(10);
    f1.display();
    return 0;
}