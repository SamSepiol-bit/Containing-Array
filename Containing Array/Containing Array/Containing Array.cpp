

#include <iostream>

#include <string>
//include the c++ string
using namespace std;

int main()
{
    string userName[6]; //1. input: Ask the user to enter five names and store them in the structurs

    cout << "Enter 6 names: \n" ;

    for (int i = 0; i < 6; i++) {
        cout << "Name: " << i + 1 << ": ";
        getline(cin, userName[i]);

    } 

    // 2. Output: Display the names in the string array

    cout << "\n The name is: \n";
    for (int i = 0; i < 6; ++i){
        cout << userName[i] << "\n";
    }

    //3. search: Ask the user tp enter a name to search for in the array.
    string searchName;
    cout << "Ënter the name seach for: ";
    getline(cin, searchName);

    //4. check if the entered nameis present in tha array.
    bool found = false;
    for (int i = 0; i < 6; i++) {
        if (userName[i] == searchName) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "the name \"" << searchName << "\" is present in the array. ";
    }
    else {
        cout << "the name \"" << searchName << "\" is absent. ";
    }
}




