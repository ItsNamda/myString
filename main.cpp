#include <iostream>

using namespace std;

class myString{                                 // Define myString class
    private:
        char* objectString = new char;          //Pointer which points to the array which stores the user defined string
    public:
        myString(char userString[]){  // Set up the constructor
            objectString = userString;          // Set the pointer to the input array
        }
        
        void displayString(){         // Display function
            cout << objectString << "\n";       // Just cout and newline
        }     

        void modifyString(char userString[]){ // Function that allows modification of the string
            objectString = userString;
        }

        ~myString(){                            // Deconstructor
            delete objectString;
        };
};


int main(){

    myString monkeyTime("monkeys eat bananas");
    cout << "monkeyTime contains: ";
    monkeyTime.displayString();


    monkeyTime.modifyString("monkeys eat grapes now");
    cout << "monkeyTime NOW contains: ";
    monkeyTime.displayString();

    monkeyTime.modifyString("monkey hungry");
    cout << "monkeyTime NOW contains: ";
    monkeyTime.displayString();

    return 0;
}