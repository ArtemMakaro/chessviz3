#include "../src/chess1.h"

//#include "../thirdparty/ctest.h"

// CTEST(input_step, step_1)
int test1() {
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

  // When
  const int result = FriendlyFire(side, i2, j2, pole);

  // Then
  const int expected = 0;
  return expected == result;
  //    ASSERT_EQUAL(expected, result);
}

int test2() {
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

  // When
  const int result = FriendlyFire(side, i2, j2, pole);

  // Then
  const int expected = 0;
  return expected == result;
  //    ASSERT_EQUAL(expected, result);
}
