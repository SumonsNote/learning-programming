#include <stdio.h>

int main()
{
    int grid[12][12], m_count = 0, m_location[20][2];

    scanf("%d", &m_count);
    for(int i = 0; i < m_count; i++) {
        scanf("%d%d", &m_location[i][0], &m_location[i][1]);
    }

    for(int i = 0; i < m_count; i++)
    {
        int x = m_location[i][0];
        int y = m_location[i][1];

        grid[x-1][y-1] += 1;
        grid[x-1][y] += 1;
        grid[x-1][y+1] += 1;

        grid[x][y-1] += 1;
        grid[x][y+1] += 1;

        grid[x+1][y-1] += 1;
        grid[x+1][y] += 1;
        grid[x+1][y+1] += 1;
    }

    for(int i = 0; i < m_count; i++) {
        int x = m_location[i][0];
        int y = m_location[i][1];
        grid[x][y] = 100;
    }

    for(int i = 1; i < 11; i++) {
        for(int j = 1; j < 11; j++) {
            if(grid[i][j] == 100) printf("*");
            else printf("%d", grid[i][j]);
        }
        printf("\n");
    }
    return 0;
}