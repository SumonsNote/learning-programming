#include <stdio.h>
#include <string.h>

typedef struct {
    char id_name[30];
}id_name_type;

typedef struct {
    char father_name[30];
}father_name_type;

typedef struct {
    char mother_name[30];
}mother_name_type;

typedef struct {
    char date_time[20];
}date_type;

typedef struct {
    id_name_type idName;
    father_name_type fatherName;
    mother_name_type motherName;
    date_type time;
    char id[20];
}national_id;

int main()
{
    national_id bd_id;

    printf("Enter name of the ID: ");
    scanf(" %[^\n]", bd_id.idName.id_name);

    printf("Enter the name of father: ");
    scanf(" %[^\n]", bd_id.fatherName.father_name);

    printf("Enter the name of mother: ");
    scanf(" %[^\n]", bd_id.motherName.mother_name);

    printf("Date of Birth:");
    scanf(" %[^\n]", bd_id.time.date_time);

    printf("Enter the ID: ");
    scanf("%s", bd_id.id);

    printf("Output: \n\n");

    printf("ID Name: %s\n", bd_id.idName.id_name);
    printf("Father's Name: %s\n", bd_id.fatherName.father_name);
    printf("Mother's Name: %s\n", bd_id.motherName.mother_name);
    printf("Date of Birth: %s\n", bd_id.time.date_time);
    printf("ID NO: %s\n", bd_id.id);

    return 0;
}