#include <iostream>
#include <string>
using namespace std;

class Reliance{
    int no_of_items;
    string name[20];
    float price[20];
    // static int counter;
    public :
        // void item_counter() {
        //     counter = 0;
        //     counter = counter + 1;
        // }
        void items_alloted() {
            cout << "Enter No:of Items alloted to store : ";
            cin >> no_of_items;
        }
        void details();
        void display_details();    
}sony;

void Reliance :: details(){
    for (int i = 0; i < no_of_items; i++)
    {
        cout << "Enter Name of Item that Sony brand given you with Id " << i+1 << " : ";
        cin >> name[i];
        cout << "Enter Price of Item that Sony brand given you with Id " << i+1 << " : ";
        cin >> price[i];
    }
    display_details();
}

void Reliance :: display_details(){
    cout << "After Time , The Items with their Prices are : " << endl;
    for (int i=0;i<no_of_items;i++){
        cout << "\t Item is " << name[i] << " and Price is " << price[i] << endl; 
    }
}

int main(){
    sony.items_alloted();
    sony.details();
    return 0;
}