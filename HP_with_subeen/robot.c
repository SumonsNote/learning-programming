#include <stdio.h>

int main()
{
    int grid[10][10];
    int i, j, x, y, n, a, b;
    char c;

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            grid[i][j] == 1;
        }
    }

    printf("Enter the number of blocked cell: ");
    scanf("%d", &n);

    printf("Enter the cell: \n");
    for(i = 1; i <= n; i++) {
        scanf("%d %d", &x, &y);
        grid[i][j] == 0;
    }

    printf("Enter the initial position of the robot: ");
    scanf("%d %d", &a, &b);
    if(grid[b][b] == 0) {
        printf("The cell (%d, %d) is blocked.\n", a, b);
    }

    printf("Enter the key (Enter 0 to exit: ).\n");

    while(1) {
        scanf("%c", c);
        if(c == '0') {
            break;
        }
        else if(c == 'U') {
            a--;
            if(grid[a][b] == 1) {
                printf("The position of the robot now is: \n", a, b);
            }
            else {
                printf("The cell (%d, %d) is blocked.\n", a, b);
            }
        }
        else if(c == 'D') {
            a++;
            if(grid[a][b] == 1) {
                printf("The position of the robot now is: \n", a, b);
            }
            else {
                printf("The cell (%d, %d) is blocked.\n", a, b);
            }
        }
        else if(c == 'L') {
            b--;
            if(grid[a][b] == 1) {
                printf("The position of the robot now is: \n", a, b);
            }
            else {
                printf("The cell is (%d, %d) is blocked.\n", a, b);
            }
        }
        else if(c == 'R') {
            b++;
            if(grid[a][b] == 1) {
                printf("The position of the robot now is: \n", a, b);
            }
            else {
                printf("The cell (%d, %d) is blocked.\n", a, b);
            }
        }
    }
    return 0;
}
