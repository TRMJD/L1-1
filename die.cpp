/*'* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
'* Program name    : L1-1                                              *
'*                                                                     *
'* Written by      : Clarence Defiesta, Kenjustin Yabut, Allen Dadia   *
'*                                                                     *
'* Purpose         : create a program that simulates die rolling       *
'*                   then add the sums of each die and count how many  *
'*                   times that sum occured through a user inputted    *
'*                    amount of rolls                                  *
'*                                                                     *
'* Inputs          : Number of die used (4-6), number of times to roll *
'*                   (2500, 3000, or 5000)                             *
'* Outputs         : a graph showcasing the amount of sums rolled      *
'* 					                                                   *
'* 					 									               *
'*                                                                     *
'* Calls           : No internal or external calls                     *
'*                                                                     *
'* Structure       : BEGIN                                             *
'*                        Straight line code no sub-processes          *
'*                   STOP                                              *
'*                        End of Program                               *
'*                                                                     *
'*---------------------------------------------------------------------*
'*                                                                     *
'* Collaboration: help from Professor Urrutia                          *
'*															           *
'*                                                                     *
'*---------------------------------------------------------------------*
'* Change Log:                                                         *
'*                         Revision                                    *
'*       Date    Changed  Rel Ver Mod Purpose                          *
'* 08/15/2023   adadia 000.000.000 Initial release of program          *
'*  08/15/2023   kyabut 000.000.000 wrote definitions for roll and     *
'*                                 getNum                              *
'* 08/15/2023 cdefiesta 000.000.000 created loops for the amount of rolls*
'* 08/16/2023   adadia 000.000.000 initialized the array of sums       *
'* 08/16/2023   kyabut  000.000.000 created bar graph                  *
'* 08/17/2023 cdefiesta 000.000.000 fixed errors regarding input       *
'* * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * * *
*/
#include <iostream>
#include<cstdlib>
#include "die.h"
using namespace std;

int main() {
    cout << "Clarence Defiesta Kenjustin Yabut Allen Dadia\t" << "L1_1 \t" << "L1-1.exe" << endl << endl;
    die user;
    int usernumDie;
    int usernumRoll;
    
    cout << "Enter the number of dice to use (4,5 or 6)" << "\nor press enter to default to 6." << endl;
    cin >> usernumDie;
    cout << "Enter the number of times the " << "\n" << usernumDie
        << " dice are to be rolled: (2500, 3000, or 5000)"
        << "\nor press enter to default to 5000." << endl;
    cin >> usernumRoll;

    if (usernumDie == 4) {
        user.roll(4, usernumRoll);
    }
    else if (usernumDie == 5) {
        user.roll(5, usernumRoll);
    }
    else user.roll(6, usernumRoll);
    
    
}