/* Names - Joe Barron, Joe Oudemolen, Jesse Hamman
* Purpose - Create a list of words and ask the user to enter a number to display a word from the array.
*           Use a command line argument to display information about th program.
* Assignment 2
* Date - 1/30/2021
* 
*/

#include <iostream>
#include <locale>
#include <cctype>
#include "Assignment2.h"
using namespace std;

bool bRun=true;

int main(int argc, char* argv[])
{
    std::cout << "There are " << argc << " argument(s):\n";

    // Loop through each argument and print its number and value
    for (int count{0}; count < argc; ++count)
    {
        std::cout << count << ": " << argv[count] << "\n\n";
    }

    Show showWord;
    
    //run in loop to continue asking for a choice
    while (bRun)
    {
        int iChoice = 1;

        //ask for a number from the user
        cout << "Please enter a number 1 - 12, or 0 to exit.\n";
        cin >> iChoice;

        //check the number that was entered
            if (iChoice > 0 && iChoice <= 12) {
                cout << showWord.getWord(iChoice) << "\n";
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

