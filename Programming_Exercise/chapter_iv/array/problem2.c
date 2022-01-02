#include <stdio.h>

int main()
{
    int sum, OK;
    int grid[9][9];
    for(int i = 0; i < 9; i++) {
        sum = 0;
        for(int j = 0; j < 9; j++) {
            sum += grid[i][j];
        }

        if(sum != 45)
        {
            OK = 0;
        }
    }

    for(int i = 0; i < 9; i++) {
        sum = 0;
        for(int j = 0; j < 9; j++)
        {
            sum += grid[j][i];
        }
        if(sum != 45)
        {
            OK = 0;
        }
    }

    for(int i = 0; i <= 7; i += 3)
    {
        for(int j = 1; j <= 7; j += 3)
        {
            sum = grid[i-1][j-1] + grid[i-1][j-1] + grid[i-1][j-1];
            sum += grid[i][j-1] + grid[i][j] + grid[i][j+1];
            sum += grid[i+1][j-1] + grid[i+1][j] + grid[i+1][j+1];

            if(sum != 45)
            {
                OK = 0;
            }
        }
    }

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            int number = grid[i][j];
            if (number < 1 || number > 9)
            {
                OK = 0;
            }
        }
    }

    for(int i = 0; i < 9; i++) {
        for(int j = 0; j < 9; j++) {
            scanf("%d%d", &grid[i][j]);
        }
        if(sum = 45) {
            printf("Correct\n");
        }
        else {
            printf("Wrong!");
        }
    }
    return 0;
}