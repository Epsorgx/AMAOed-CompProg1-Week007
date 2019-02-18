/* ****************************************************************
 * @author: <Mark Gerone F. Grospe>
 * @app name: <Computer painter>
 * @app desc: <Using WHILE statement, the computer displays a right triangle using asterisks
 *             where the height is at the left corner of the application.
 *             The height will depend on the user input.>
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

    int user_input, i, t;

    i = 0;
    cout << "This program will draw a triangle for you!\n";
    cout << "Please enter a number: ";
    cin >> user_input;
    cout << "\n";
    cout << "-------------------------------\n\n";

    while (i < user_input){
        t = 0;
        while (t <= i) {
            cout << "*";
            t += 1;
        }
        cout<< endl;
        i++;
    };

    cout << "\n";
    cout << "-------------------------------\n\n";
    cout << "What a nice right triagle.\n\n";

    cin.ignore();
    // ********************** DO NOT CHANGE **********************
    // Print a new line and ask user for any key before exiting
    // ***********************************************************
    _pause();
    return EXIT_SUCCESS;
}
