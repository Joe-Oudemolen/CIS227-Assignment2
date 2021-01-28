/* Names -
* Purpose - 
* Assignment 2
* Date - 
* 
*/

#include <iostream>
#include <locale>
#include <cctype>
using namespace std;

bool bRun=true;

int main()
{
    //run in loop to continue asking for a choice
    while (bRun)
    {

        int iChoice = 1;

        //ask for a number from the user
        cout << "Please enter a number 1 - 12, or 0 to exit.\n";
        cin >> iChoice;

        //check the number that was entered
            if (iChoice > 0 && iChoice <= 12) {

                cout << iChoice << "\n";

            }

            else if (iChoice < 0 || iChoice > 12) {
                cout << "That is not a valid choice.\n";
            }

            else if (iChoice == 0)
            {
                exit(0);
            }
        
    }
    return 0;
}

