#include <stdio.h>
#include <stdbool.h>

int main()
{
    int age = 0;
    int college = 0;
    int subject = 0;
    bool interview = false;

    printf("\nWhat college? 1 for Harvard, 2 for Yale, 3 for other: ");
    scanf("%d", &college);
    printf("\nWhat subject? 1 for Chemistry, 2 for economics, 3 for other: ");
    scanf("%d", &subject);
    printf("\nHow old is the applicant? ");
    scanf("%d", &age);

    if((age > 25 && subject == 1) && (college == 3 || college == 1))
      interview = true;
    if(college == 2 && subject == 1)
      interview = true;
    if(college == 1 && subject == 2 && !(age > 28))
      interview = true;
    if(college == 2 && (subject == 2 || subject == 3) && age > 25)
      interview = true;

    if(interview)
      printf("\n\nGive 'em an interview.\n");
    else
      printf("\n\nReject 'em\n");
    return 0;
}