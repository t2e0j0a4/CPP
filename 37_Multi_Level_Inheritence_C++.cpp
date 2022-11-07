#include <iostream>
using namespace std;

class Grand_Father{
    int angryness;
    protected:
        int kindness;
    public:
        int weakness;
        void set_levels(int a , int k , int w){
            angryness = a;
            kindness = k;
            weakness = w;
        }
        void show_levels(){
            cout << "GrandFather as "<<angryness<<"%"<<" of angryness and "<<kindness<<"%"<<" of kindness and "<<weakness<<"% of weakness."<<endl;
        }
};  

class Father : public Grand_Father{
    public:
        int goodness;
        void set_goodness(int g){
            goodness = g;
        }
        void show_goodness(){
            cout << "Father as "<<goodness<<"%"<<" of goodness."<<endl;
        }
};

class Child : public Father{
    public:
        void show_history_of_mine(){
            show_levels();
            show_goodness();
            cout << "Child as Nothing came from Father and Grand Father.";
        }
};

int main(){
    
    Child teja;
    teja.set_levels(85 , 90 , 60);
    teja.set_goodness(96);
    teja.show_history_of_mine();

    return 0;
}