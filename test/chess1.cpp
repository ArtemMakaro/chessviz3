#include "../src/chess.h"

int test1()
{
    // Given
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int side = 0;
    const int i2 = 6;
    const int j2 = 1;
    const int result = FriendlyFire(side, i2, j2, pole);
    const int expected = 0;
    return expected == result;
}

int test2()
{
    // Given
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int side = 1;
    const int i2 = 1;
    const int j2 = 1;
    const int result = FriendlyFire(side, i2, j2, pole);
    const int expected = 0;
    return expected == result;
}

int test3()
{
    // Given
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int side = 0;
    const int i2 = 1;
    const int j2 = 1;
    const int result = FriendlyFire(side, i2, j2, pole);
    const int expected = 1;
    return expected == result;
}

int test4()
{
    // Given
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int side = 1;
    const int i2 = 6;
    const int j2 = 1;
    const int result = FriendlyFire(side, i2, j2, pole);
    const int expected = 1;
    return expected == result;
}

int test5()
{
    // Given
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int team = 0;
    const int i1 = 6;
    const int i2 = 1;
    const int j1 = 5;
    const int j2 = 1;
    const int result = MoveCheck(team, i1, i2, j2, j2, pole);
    const int expected = 0;
    return expected == result;
}
int test6()
{
    // Given
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int team = 0;
    const int i1 = 6;
    const int i2 = 5;
    const int j1 = 1;
    const int j2 = 1;
    const int result = MoveCheck(team, i1, i2, j1, j2, pole);
    const int expected = 1;
    return expected == result;
}

int test7()
{
    // Given
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int team = 1;
    const int i1 = 2;
    const int i2 = 1;
    const int j1 = 1;
    const int j2 = 1;
    const int result = MoveCheck(team, i1, i2, j1, j2, pole);
    const int expected = 0;
    return expected == result;
}

int test8()
{
    // Given
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int team = 1;
    const int i1 = 7;
    const int i2 = 6;
    const int j1 = 1;
    const int j2 = 1;
    const int result = MoveCheck(team, i1, i2, j1, j2, pole);
    const int expected = 0;
    return expected == result;
    //    ASSERT_EQUAL(expected, result);
}

int test9()
{
    // Given
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int team = 0;
    const int i1 = 7;
    const int i2 = 5;
    const int j1 = 2;
    const int j2 = 3;
    const int result = MoveCheck(team, i1, i2, j1, j2, pole);
    const int expected = 1;
    return expected == result;
}

int test10()
{
    // Given
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int team = 0;
    const int i1 = 7;
    const int i2 = 5;
    const int j1 = 3;
    const int j2 = 1;
    const int result = MoveCheck(team, i1, i2, j1, j2, pole);
    const int expected = 0;
    return expected == result;
}

int test11()
{
    // Given
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int team = 0;
    const int i1 = 7;
    const int i2 = 6;
    const int j1 = 4;
    const int j2 = 4;
    const int result = MoveCheck(team, i1, i2, j1, j2, pole);
    const int expected = 0;
    return expected == result;
}

int test12()
{
    // Given
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int team = 0;
    const int i1 = 7;
    const int i2 = 6;
    const int j1 = 5;
    const int j2 = 5;
    const int result = MoveCheck(team, i1, i2, j1, j2, pole);
    const int expected = 0;
    return expected == result;
}

int test13()
{
    // Given
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int team = 0;
    const int i1 = 7;
    const int i2 = 4;
    const int j1 = 6;
    const int j2 = 9;
    const int result = MoveCheck(team, i1, i2, j1, j2, pole);
    const int expected = 0;
    return expected == result;
}

int test14()
{
    // Given
    char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                       {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                       {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                       {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                       {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                       {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};

    const int team = 0;
    const int i1 = 6;
    const int i2 = -1;
    const int j1 = 1;
    const int j2 = 1;
    const int result = MoveCheck(team, i1, i2, j1, j2, pole);
    const int expected = 0;
    return expected == result;
}
