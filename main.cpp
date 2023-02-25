/*
 * Michael Murphy
 * 1/23/23
 * Week 5 Lab 4 TTT
 * Tic-Tac-Toe project
 * Objective: Objective: To use loops, functions, and arrays
 * to produce user input into the game and produce a winner.
 *
 */


#include <iostream>
#include "iomanip"

using namespace std;

int playerChoice(string);
void display();


int main() {
    cout << "Michael Murphy - 1/23/23\n";
    cout << "Week 4 Lab Player choice function for TicTacToe\n";
    cout << "Objective: To use loops, functions, and arrays to "
            "produce user input into the game and produce a winner.\n";





    int nums[9] = {1,2,3,4,5,6,7,8,9};
    cout << "\n\n\n" << nums[0];
    cout << setw(10);
    cout << nums[1];
    cout << setw(10);
    cout << nums[2];
    cout << "\n\n\n"<< nums[3];
    cout << setw(10);
    cout << nums[4];
    cout << setw(10);
    cout << nums[5];
    cout << setw(10);
    cout << "\n\n\n" << nums[6];
    cout << setw(10);
    cout << nums[7];
    cout << setw(10);
    cout << nums[8];
    cout << setw(10);
    return 0;
}



