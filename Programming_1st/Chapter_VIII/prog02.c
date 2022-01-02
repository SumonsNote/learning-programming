#include <stdio.h>

int b_search(int ara[], int low, int high, int key);

int main()
{
    int ara[] = {
        1, 4, 6, 8, 9, 11, 14, 15, 20, 25, 33, 83, 87, 97, 99, 100
    };
    int low = 0;
    int high = 15;
    int key = 97;

    int mid = b_search(ara, low, high, key);
    if(key == ara[mid]) {
        printf("%d is found in the array. It is %dth element of the array.\n", ara[mid], mid);
    }
    else {
        printf("%d is not in the array.\n", key);
    }

    return 0;
}

int b_search(int ara[], int low, int high, int key)
{
    int mid;

    while (low <= high) {
        mid = (low + high) / 2;
        if(key == ara[mid]) {
            break;
        }
        if(key < ara[mid]) {
            high = mid - 1;
        }
        else {
            low = mid + 1;
        }
    }

    return mid;

}