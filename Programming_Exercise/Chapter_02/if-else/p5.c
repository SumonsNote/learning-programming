#include <stdio.h>

int main()
{
    int programming_1st, win_the_math, ashcayrjay_jagat, total_books;
    int my_money = 990;

    printf("Price of Programming_1st:\n");
    scanf("%d", &programming_1st);
    printf("Price of win_the_math:\n");
    scanf("%d", &win_the_math);
    printf("Price of Ashcayrjay_jagat:\n");
    scanf("%d", &ashcayrjay_jagat);

    total_books = programming_1st + win_the_math + ashcayrjay_jagat;
    int first_second = programming_1st + win_the_math;
    int second_third = win_the_math + ashcayrjay_jagat;
    int first_third = programming_1st + ashcayrjay_jagat;

    if(my_money >= total_books) {
        printf("Three books: Programming_1st, Win the math, ashcayrjay_jagat\n");
    }
    else if(my_money >= first_second) {
        printf("Two books: programming_1st, win_the_math\n");
    }
    else if(my_money >= second_third) {
        printf("Two books: win_the_math, ashcayrjay_jagat\n");
    }
    else if(my_money >= first_third) {
        printf("Two books: programming_1st, ashcayrjay_jagat\n");
    }
    else {
        printf("Not enough money.\n");
    }
    
    return 0;
}