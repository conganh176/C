#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int pos[9] = { 0 };
bool rowFlag[9] = { false };
bool rowPlusCol[17] = { false };
bool rowMinusCol[16] = { false };
int solution = 0;


void PrintSolution(int pos[]);
void Try(int column);


int main()
{
    Try(1);
    return 0;
}


void PrintSolution(int pos[])
{
    int col;
    for (col = 1; col <= 8; col++)
        printf("\nCon hau thu %d nam tai hang %d", col, pos[col]);
}


void Try(int column)
{
    int row;
    for (row = 1; row <= 8; row++)
    {
        if (!rowFlag[row] && !rowPlusCol[row + column] && !rowMinusCol[row - column])
        {
            pos[column] = row;
            rowFlag[row] = true;
            rowPlusCol[row + column] = true;
            rowMinusCol[row - column] = true;

            if (column == 8)
            {
                solution++;
                printf("\n\nLoi giai thu %d:", solution);
                PrintSolution(pos);
            }
            else
                Try(column + 1);
            
            pos[column] = -1;
            rowFlag[row] = false;
            rowPlusCol[row + column] = false;
            rowMinusCol[row - column] = false;
        }
    }
}