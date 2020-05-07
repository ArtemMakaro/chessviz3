#include "../src/chess.h"
#define CATCH_CONFIG_MAIN
#include "../thirdparty/catch/catch.hpp"

TEST_CASE("Test1")
{
    REQUIRE(1 == 1);
}
char pole[9][9] = {{'8', 'r', 'n', 'b', 'q', 'k', 'b', 'n', 'r'},
                   {'7', 'p', 'p', 'p', 'p', 'p', 'p', 'p', 'p'},
                   {'6', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'5', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'4', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'3', ' ', ' ', ' ', ' ', ' ', ' ', ' ', ' '},
                   {'2', 'P', 'P', 'P', 'P', 'P', 'P', 'P', 'P'},
                   {'1', 'R', 'N', 'B', 'Q', 'K', 'B', 'N', 'R'},
                   {' ', 'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h'}};
TEST_CASE()
{
    int i1 = 6, j1 = 5, i2 = 5, j2 = 5;
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    REQUIRE(expected == result);
}
TEST_CASE() // W_Horse left
{
    int i1 = 7, j1 = 2, i2 = 5, j2 = 3;
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    REQUIRE(expected == result);
}
TEST_CASE()
{
    int i1 = 6, j1 = 4, i2 = 5, j2 = 5;
    pole[5][5] = 'r';
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[5][5] = ' ';
    REQUIRE(expected == result);
}
TEST_CASE() // W_Bishop right
{
    pole[6][5] = ' ';
    int i1 = 7, j1 = 6, i2 = 5, j2 = 4;
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[6][5] = 'P';
    REQUIRE(expected == result);
}
TEST_CASE() // W_Queen
{
    pole[6][4] = ' ';
    int i1 = 7, j1 = 4, i2 = 5, j2 = 4;
    int result = MoveCheck(0, i1, i2, j1, j2, pole);
    int expected = 1;
    pole[6][4] = 'P';
    REQUIRE(expected == result);
}