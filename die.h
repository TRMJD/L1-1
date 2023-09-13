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
#pragma once
#include <cstdlib>
#include <iostream>
#include<iomanip>
using namespace std;


class die
{
public:
    die() {
        num = 1;
        initializetotalSum(totalSum);
    }
    //Default constructor
    //Sets the default number rolled by a die to 1

    void roll(int numDie, int numRoll);
    //Function to roll a die.
    //This function uses a random number generator to randomly
    //generate a number between 1 and 6, and stores the number
    //in the instance variable num.

    int getNum(int numDie) const;
    //Function to return the number on the top face of the die.
    //Returns the value of the instance variable num.

    void initializetotalSum(int totalSum[]);

    

    
private:
    int num; //The value of this instance ( 1 through 6variable num.
    int totalSum[32]; //each index contains a sum value of the faces
    
    
   
};

void die::roll(int numDie, int numRoll)
{
    if (numRoll == 2500) { 
        numRoll = 2500;
    }
    else if (numRoll == 3000) {
        numRoll = 3000;
    }
    else numRoll = 5000;

    
    
    for (int j = 0; j <= numRoll; j++) {    //this is the loop controlled by the number of rolls or iterations 
        int sum = 0;
        for (int i = 1; i <= numDie; i++) { //random number generator that generates the face
           
            num = rand() % 6 + 1;           //value in num
            sum = sum + num;
            //cout << "num: " << num << endl;
        }
        ++totalSum[sum];//count of how many times the sum was rolled
        
        
        
    }

    cout << "For " << numDie << " dice, rolled " << numRoll << " times" << endl;
    cout << "Count %:--- 0 10 20 30 40 50 60 70 80 90 100" << endl;
    cout << "Sum count |....|....|....|....|....|....|....|....|....|....|" << endl;

    int highCount = totalSum[0];
    int barLength;
    for (int i = numDie; i < 32; i++) {
        if (totalSum[i] > highCount) {
            highCount = totalSum[i];
        }
    }
    for (int i = numDie; i < 32; i++) {
        
        //cout << "\nSum " << i << "occurred " << totalSum[i] << " times." << endl;
        cout << " " << setw(2) << i; // Formatting so Sum and count columns
        cout << " (" << setw(4) << totalSum[i] << ") "; // are neat and tidy.
        barLength = totalSum[i] / (.02 * highCount);
        for (int x = 0; x < barLength; x++) {
            cout << "*";
        }
        cout << endl;
        
    }
   
   

}

int die::getNum(int num) const
{
    die die;
    //die.roll(num); //calls the function to roll die
    return num; 
}

void die::initializetotalSum(int totalSum[]) {
    //set up the array of sums
    int count = 4; //4 is the lowest total sum 
    for (int i = 0; i <= 32; i++) {
        totalSum[i] = count++;
    }
}