#include <stdio.h>

int main()
{
    int x, y;
    int a, b;
    int i, j, n;

    char c;

    int grid[10][10];

    for(i = 0; i < 10; i++) {
        for(j = 0; j < 10; j++) {
            grid[10][10] = 1;
        }
    }

    printf("Please enter the blocked cells of the robot: ");
    scanf("%d", &n);

    printf("Now enter the cells: ");

    for(i = 0; i < n; i++) {
        scanf("%d %d", &x, &y);
        grid[10][10] = 0;
    }

    printf("Please enter the initial position of the robot: ");
    scanf("%d %d", &a, &b);

    if(grid[a][b] == 0) {
        printf("The cell (%d, %d) is blocked.\n", a, b);
    }
    
    while(1) {
        scanf("%c", c);
        if(c == 'S') {
            break;
        }
        else if(c == 'U') {
            a--;
            if(grid[a][b] == 1) {
                printf("Now position of the robot is: %d %d", a, b);
            }
            else {
                printf("The cell (%d %d) is blocked.\n", a, b);
            }
        }
        else if(c == 'D') {
            a++;
            if(grid[a][b] == 1) {
                printf("Now position of the robot is: %d %d", a, b);
            }
            else {
                printf("The cell (%d %d) is blocked.\n", a, b);
            }
        }
        else if(c == 'R') {
            b--;
            if(grid[a][b] == 1) {
                printf("Now position of the robot is: %d %d", a, b);
            }
            else {
                printf("The cell (%d %d) is blocked.\n", a, b);
            }
        }
        else if(c == 'L') {
            b++;
            if(grid[a][b] == 1) {
                printf("Now position of the robot is: %d %d", a, b);
            }
            else {
                printf("The cell (%d %d) is blocked.\n", a, b);
            }
        }
    }

    return 0;
}