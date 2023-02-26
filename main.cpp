/*
 * Michael Murphy
 * 1/23/23
 * Week 5 Lab 4 TTT
 * Tic-Tac-Toe project
 * Objective: Objective: To use loops, functions, and arrays
 * to produce user input into the game.
 *
 */


#include <iostream>
#include "iomanip"

using namespace std;

char squares[9] = {'1','2','3','4','5','6','7','8','9'};

void display();
void playerChoice(int player);

int main() {
    cout << "Michael Murphy - 2/26/23\n";
    cout << "Week 4 Lab Player choice function for TicTacToe\n";
    cout << "Objective: To use loops, functions, and arrays to "
            "produce user input into the game and produce a winner.\n";

    display();
    playerChoice(1);
    display();
    playerChoice(2);
    display();
    playerChoice(1);
    display();
    playerChoice(2);
    display();
    playerChoice(1);
    display();
    playerChoice(2);
    display();
    playerChoice(1);
    display();
    playerChoice(2);
    display();
    playerChoice(1);
    display();
    return 0;
}

void display() {
    cout << "\n\n\n" << squares[0];
    cout << std::setw(10);
    cout << squares[1];
    cout << std::setw(10);
    cout << squares[2];
    cout << "\n\n\n"<< squares[3];
    cout << std::setw(10);
    cout << squares[4];
    cout << std::setw(10);
    cout << squares[5];
    cout << std::setw(10);
    cout << "\n\n\n"<< squares[6];
    cout << std::setw(10);
    cout << squares[7];
    cout << std::setw(10);
    cout << squares[8] << endl;
    cout << std::setw(10);
}


void playerChoice(int player) {
    repeat:
    char chosenValue = 'x';
    cout << "Please make a choice" << endl;
    cin >> chosenValue;

    switch (chosenValue) {
        case '1':
            if (squares[0] == 'X' || squares[0] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[0] = 'X';
                } else {
                    squares[0] = 'O';
                }
                break;
            }
        case '2':
            if (squares[1] == 'X' || squares[1] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[1] = 'X';
                } else {
                    squares[1] = 'O';
                }
                break;
            }
        case '3':
            if (squares[2] == 'X' || squares[2] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[2] = 'X';
                } else {
                    squares[2] = 'O';
                }
                break;
            }
        case '4':
            if (squares[3] == 'X' || squares[3] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[3] = 'X';
                } else {
                    squares[3] = 'O';
                }
                break;
            }
        case '5':
            if (squares[4] == 'X' || squares[4] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[4] = 'X';
                } else {
                    squares[4] = 'O';
                }
                break;
            }

        case '6':
            if (squares[5] == 'X' || squares[5] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[5] = 'X';
                } else {
                    squares[5] = 'O';
                }
                break;
            }
        case '7':
            if (squares[6] == 'X' || squares[6] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[6] = 'X';
                } else {
                    squares[6] = 'O';
                }
                break;
            }
        case '8':
            if (squares[7] == 'X' || squares[7] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[7] = 'X';
                } else {
                    squares[7] = 'O';
                }
                break;
            }
        case '9':
            if (squares[8] == 'X' || squares[8] == 'O'){
                goto repeat;
            } else {
                if (player == 1) {
                    squares[8] = 'X';
                } else {
                    squares[8] = 'O';
                }
                break;
            }
        default:
            cout << "Please enter another number" << endl;
            goto repeat;
    }
}



