#include <iostream>
using namespace std;

class Jungle{
    static int animals_id;
    string animal_name;
    public :
        void incoming_animal();
        void display_animal();
        static void animal_func(){ // Static functions can only take static data members as their local family none of static data types will gove you an error.

            cout << "Hello This is Animal with animals_id " << animals_id << endl;
        }
};

int Jungle :: animals_id = 101; // By default the value is 0.

void Jungle :: incoming_animal(){
    cout << "Enter Animal Name with animals_id " << animals_id << " : " ;
    cin >> animal_name;
    display_animal();
    animals_id++;
}

void Jungle :: display_animal(){
    cout << "The Animal with animals_id " << animals_id << " is : " << animal_name << endl;
}


int main(){
    
    Jungle Amazon,Nalamalla;

    Amazon.incoming_animal();
    Jungle::animal_func(); // Static Methods  can only be assessed with class but not with objects.
    // Amazon.display_animal();

    Nalamalla.incoming_animal();
    Jungle::animal_func(); // Static Methods  can only be assessed with class but not with objects.
    // Nalamalla.display_animal();
    return 0;
}