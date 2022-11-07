#include <iostream>
#include <math.h>
using namespace std;

class simpleCalculator{
    int num1,num2;
    public:
        void set_nums(int a , int b){
            num1 = a;
            num2 = b;
        }
        int cal(char type){
            if(type == '+'){
                return num1+num2;
            } 
            else if(type == '-'){
                return num1-num2;
            }
            else if(type == '*'){
                return num1*num2;
            }
            else{
                return num1/num2;
            }
        }
};

class scientificCalculator{
    public :
        int log_calc(int value){
            return log10(value);
        }
        int sqrt_calc(int value){
            return sqrt(value);
        }
        int pow_calc(int val , int power){
            return pow(val, power);
        }
};

class Calculator : public simpleCalculator , public scientificCalculator {
    public:
        void calculate(){
            cout << "Calculating!!" << endl;
        }
};

int main(){
    Calculator calci;
    calci.set_nums(10,20);
    cout << "Addition of : " << calci.cal('+') << endl;
    cout << "Subtraction of : " << calci.cal('-') << endl;
    cout << "Multiplication of : " << calci.cal('*') << endl;
    cout << "Division of : " << calci.cal('/') << endl;

    cout << "Log : " << calci.log_calc(100) << endl;
    cout << "Pow : " << calci.pow_calc(100,2) << endl;
    cout << "Sqrt : " << calci.sqrt_calc(100) << endl;


    return 0;
}