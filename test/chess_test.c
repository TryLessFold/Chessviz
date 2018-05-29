#include <ChessCheck.h>


#include <ctest.h>

void FillMass(int a[8][8])
{
    a[7][0] = 0; a[6][0] = 0;
    a[7][1] = 0; a[6][1] = 0;
    a[7][2] = 0; a[6][2] = 0;
    a[7][3] = 0; a[6][3] = 0;
    a[7][4] = 0; a[6][4] = 0;
    a[7][5] = 0; a[6][5] = 0;
    a[7][6] = 0; a[6][6] = 0;
    a[7][7] = 0; a[6][7] = 0;

    a[2][0] = 0; a[3][0] = 0;
    a[2][1] = 0; a[3][1] = 0;
    a[2][2] = 0; a[3][2] = 0;
    a[2][3] = 0; a[3][3] = 0;
    a[2][4] = 0; a[3][4] = 0;
    a[2][5] = 0; a[3][5] = 0;
    a[2][6] = 0; a[3][6] = 0;
    a[2][7] = 0; a[3][7] = 0;

    a[4][0] = 0; a[5][0] = 0;
    a[4][1] = 0; a[5][1] = 0;
    a[4][2] = 0; a[5][2] = 0;
    a[4][3] = 0; a[5][3] = 0;
    a[4][4] = 5; a[5][4] = 0;
    a[4][5] = 0; a[5][5] = 0;
    a[4][6] = 0; a[5][6] = 0;
    a[4][7] = 0; a[5][7] = 0;

    a[0][0] = 0; a[1][0] = 0;
    a[0][1] = 0; a[1][1] = 0;
    a[0][2] = 0; a[1][2] = 0;
    a[0][3] = 0; a[1][3] = 0;
    a[0][4] = 0; a[1][4] = 0;
    a[0][5] = 0; a[1][5] = 0;
    a[0][6] = 0; a[1][6] = 0;
    a[0][7] = 0; a[1][7] = 0;
}

CTEST(queen, down_right)
{
    int a[8][8];
    FillMass(a);
    const int i=4;
    const int j=4;
    const int i1=6;
    const int j1=6;
    const int result = CheckMove(a, i,j, i1, j1);

    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(queen, up_left)
{
    int a[8][8];
    FillMass(a);
    const int i=4;
    const int j=4;
    const int i1=2;
    const int j1=2;
    const int result = CheckMove(a, i,j, i1, j1);

    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(queen, up_right)
{
    int a[8][8];
    FillMass(a);
    const int i=4;
    const int j=4;
    const int i1=2;
    const int j1=6;
    const int result = CheckMove(a, i,j, i1, j1);

    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(queen, down_left)
{
    int a[8][8];
    FillMass(a);
    const int i=4;
    const int j=4;
    const int i1=6;
    const int j1=2;
    const int result = CheckMove(a, i,j, i1, j1);

    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(queen, right)
{
    int a[8][8];
    FillMass(a);
    const int i=4;
    const int j=4;
    const int i1=4;
    const int j1=6;
    const int result = CheckMove(a, i,j, i1, j1);

    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(queen, down)
{
    int a[8][8];
    FillMass(a);
    const int i=4;
    const int j=4;
    const int i1=6;
    const int j1=4;
    const int result = CheckMove(a, i,j, i1, j1);

    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(queen, left)
{
    int a[8][8];
    FillMass(a);
    const int i=4;
    const int j=4;
    const int i1=4;
    const int j1=2;
    const int result = CheckMove(a, i,j, i1, j1);

    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
CTEST(queen, up)
{
    int a[8][8];
    FillMass(a);
    const int i=4;
    const int j=4;
    const int i1=2;
    const int j1=4;
    const int result = CheckMove(a, i,j, i1, j1);

    const int expected = 1;
    ASSERT_EQUAL(expected, result);
}
