/* ****************************************************************
 * @author: <Mark Gerone F. Grospe>
 * @app name: <Computer painter>
 * @app desc: <DO WHILE statement that displays an inverted equilateral triangle using asterisks.
 *             No asterisk should be adjacent to one another.
 *             The height will depend on the user input>
 * @history:
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 *  - <yyyy/mm/dd> | <name>
 *      -- <description>
 *      -- <description>
 *      -- <description>
 * ****************************************************************/

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include "_pause.h"

using namespace std;

//////////////////////////////////////////////////////////////////
//                               NOTE
// This is your program entry point. Your main logic is placed
// inside this function. You may add your functions before this
// "main()", or after this "main()" provided you added reference
// before this "main()" function.
//////////////////////////////////////////////////////////////////

int main() {
    // ************************** TO DO **************************
    // Place your code logic after this comment line
    // ***********************************************************

    int user_input, i, j, t;

    
    cout << "This program will draw a triangle for you!\n";
    cout << "Please enter a number: ";
    cin >> user_input;
    cout << "\n";
    cout << "-------------------------------\n\n";

    i = 0;

    do {
        for (j = 1; j <= i; j++){
            cout << " ";
        }
            for (t = user_input; t >= 2 * i; t--) {
                cout << "*";
                
            };
         cout << "\n";
    i++;
    } while (i < user_input) ;

    cout << "\n";
    cout << "-------------------------------\n\n";
    cout << "What a nice inverted triagle.\n\n";

    cin.ignore();
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
