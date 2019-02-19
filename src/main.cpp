/* ****************************************************************
 * @author: <Mark Gerone F. Grospe>
 * @app name: <Computer painter>
 * @app desc: <FOR statement that displays a right triangle using asterisks
 *             where the height is at the right corner of the application.
 *             The height will depend on the user input..>
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
    cout << "Please enter the height of triagle: ";
    cin >> user_input;
    cout << "\n";
    cout << "-------------------------------\n\n";

    for (i = 0; i < user_input; i++){
        for (j = user_input-1; j >= i; j--){
            cout << " ";
        }
            for (t = 0; t <= i; t++) {
                cout << "*";
            }
        cout<< endl;
    
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
