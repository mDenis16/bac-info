#include <iostream>
using namespace std;
int main()
{
    int p1 = 12, p2 = 8;
    int posibilitati[2][4][2] = {0};
    int c_p1 = 0, c_p2 = 0;
    for (size_t i = 9; i >= 1; i--)
        for (size_t j = 1; j <= 9; j++)
            if (i * j == p2)
            {
                posibilitati[1][c_p2][0] = i;
                posibilitati[1][c_p2++][1] = j; 
            }else if (i * j == p1)
            {
                posibilitati[0][c_p1][0] = i;
                posibilitati[0][c_p1++][1] = j;
            }

    for (size_t i = 0; i < c_p1; i++)
        for (size_t j = 0; j < c_p2; j++)
          cout << posibilitati[0][i][0]  << posibilitati[0][i][1] << "000" << posibilitati[1][j][0] << posibilitati[1][j][1] << endl;

}