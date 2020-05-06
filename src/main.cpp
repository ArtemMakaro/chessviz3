#include "chess.h"
#include "print.h"
#include <iomanip>
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

using namespace std;

int main() {
  char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                     {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                     {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                     {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                     {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                     {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                     {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                     {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                     {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};
  int scorewhite = 0, scoreblack = 0, team = 0;
  char Maswhite[16], Masblack[16];
  ChessField(pole);
  while (true) {
    Move(pole, &team, &scorewhite, &scoreblack, Maswhite, Masblack);
    ChessField(pole);
  }
  return 0;
}
