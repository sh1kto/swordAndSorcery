#include <iostream>

using namespace std;

int main(){
    cout << "Sword and Sorcery: A Text Adventure\n";

    int begin;

    cout << "Choose (1.Start/ 2.Quit)";
    cin >> begin;
    if(begin==1) {
        cout << "Welcome young adventurer in the land of Aeloria";
    }
    else if(begin==2) {
        cout << "See you again";
    }
    else {
        cout << "You have selected wrong input (Allowed input 1/2)";
    }

    return 0;
    

}
