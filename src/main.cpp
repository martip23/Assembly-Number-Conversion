#include <iostream>
using namespace std;
#include "numbers.h"

char buffer[100];
int ival;

int main(int argc, char * argv[]) {
    cout << "Lab 3 - Number Conversion\n";
    cout << "\tAuthor: Patrick Martinez\n";
    cout << "\tDate  : Nov 1, 2016\n\n";

    cout << "Enter a decimal number to convert: ";
    cin >> buffer;
    cout << "You entered : " << buffer << endl;
    ival = n_dtoi(buffer);
    cout << "\tAfter converting, this gave: " << ival << endl;    
    ival = n_len(buffer);
    cout << "\tThe input string was " << ival 
        << " characters long" << endl;

    return 0;
}

