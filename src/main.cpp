#include <iostream>
using namespace std;
#include "numbers.h"

char buffer[100];
int ival;

int main(int argc, char * argv[]) {
    cout << "Lab 3 - Number Conversion\n";
    cout << "\tAuthor: Patrick Martinez\n";
    cout << "\tDate  : Nov 1, 2016\n\n";
    cout << "Binary entries should start with 0b_\n\n";

    cout << "Enter a decimal or binary number to convert: ";
    cin >> buffer;

    if (buffer[0] == '0' && buffer[1] == 'b' && buffer [2] == '_'){
        cout << "Detected binary entry: " << buffer << endl;
        ival = n_btoi(buffer);
        cout << "\tAfter converting, this gave: " << ival << endl;
    }

    else {
        cout << "You entered : " << buffer << endl;
        ival = n_dtoi(buffer);
        cout << "\tAfter converting, this gave: " << ival << endl;    
   
    }

    ival = n_len(buffer); 
    cout << "\tThe input string was " << ival 
        << " characters long" << endl;

    return 0;
}

