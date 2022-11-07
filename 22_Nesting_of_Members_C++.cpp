// Nesting of Members in Classes

#include <iostream>
#include <string>
using namespace std;

class binary {
    // Unless you write that memebeer as public it will be private and cant be assessed outside a class.
    string s;
    void check_binary();
    void compliment();
    void display_compliment();

    public:
        void read_binary_give_compliment();
        
}number; // Here 'number' is a object for class 'binary'

void binary :: read_binary_give_compliment(){
    cout << "Enter the Binary Number : ";
    cin >> s; // These are Nesting of Members i.e, using other members of a class in class own other members.
    check_binary(); // These are Nesting of Members i.e, using other members of a class in class own other members.
}

void binary :: check_binary(){
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i)!='0' && s.at(i)!='1'){
            cout << "Entered Number is not in binary format.";
            return ;
        }
    }
    compliment(); // These are Nesting of Members i.e, using other members of a class in class own other members.
}

void binary :: compliment(){
    for (int i = 0; i < s.length(); i++){
        if (s.at(i) == '0'){
            s.at(i) = '1';
        }
        else {
            s.at(i) = '0';
        }
    }
    cout << "Compliment to given binary is : " ;
    display_compliment(); // These are Nesting of Members i.e, using other members of a class in class own other members.
}

void binary :: display_compliment(){
    for (int i = 0; i < s.length(); i++){
        cout << s.at(i) << "";
    }
}

int main()
{
    number.read_binary_give_compliment();
    return 0;
}