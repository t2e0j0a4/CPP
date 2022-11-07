#include <iostream>
using namespace std;

// Structures declaration
struct party {
    int members;
    char partyCode;
    float spendAmount;
    bool peopleEnjoyed;
};

// Using typedef can make assessing easy.
typedef struct birthdayParty {
    int members;
    char partyCode;
    float spendAmount;
    bool peopleEnjoyed;
} coolParty ;

// Union declaration - Also can use typedef here also
union money {
    int rice_in_kgs;
    char fav_char;
};

int main(){

    // Structures
    
    // Structures are user-defined datatypes used for storing different heterogeneous datatypes at once.

    // Assessing that structure party 
    struct party tejaBirthdayParty ;
    tejaBirthdayParty.members = 100;
    tejaBirthdayParty.partyCode = 'T';
    tejaBirthdayParty.spendAmount = 244512.98;
    tejaBirthdayParty.peopleEnjoyed = true;

    cout << tejaBirthdayParty.members << endl; // 100
    cout << tejaBirthdayParty.partyCode << endl; // 'T'
    cout << tejaBirthdayParty.spendAmount << endl; // 244512.98
    cout << tejaBirthdayParty.peopleEnjoyed << endl; // 1

    // Using typedef for assessing 
    // coolParty pavanBirthdayParty; using typedef makes easy


    // Unions

    // Unions are also user-defined datatypes that are same as structures but while all structures members can assess at once since they have their own member memory . But , In Unions the single largest memory is shared accross all members so can only assess each element at once to display the output , and not all at once to display.

    union money m1;
    m1.rice_in_kgs = 100;
    // m1.fav_char = 'C'; // If we note this then what we print down we give a garbage value since only one can assess it at a time
    cout << m1.rice_in_kgs << endl;

    // Enums
    enum values {hello , hi , bye};
    values v1 = hello;
    values v2 = hi;
    values v3 = bye;
    cout << v1 << endl; // 0
    cout << v2 << endl; // 1
    cout << v3 << endl; // 2

    return 0;
}