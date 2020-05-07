#include "chess.h"

void ChessField(char pole[][9])
{
    system("clear");
    for (int i = 0; i < 9; i++) {
        for (int j = 0; j < 9; j++) {
            cout << setw(2) << pole[i][j];
        }
        cout << endl;
    }
}
