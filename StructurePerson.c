#include <stdio.h>
struct person
{

    char Surname[20];
    char Firstname[20];
    char address[20];
    struct DOB
    {
        int dd;
        int mm;
        int yy;
    } DOB;
};

int main()
{
    struct person P[2];

    for (int i = 0; i < 2; i++)

    {
        printf("Person %d\n\n", i + 1);
        printf("Enter First Surname: ");
        scanf("%s", P[i].Firstname);
        printf("Enter Surname: ");
        scanf("%s", P[i].Surname);
        printf("Enter DOB Format[dddd mmmm yyyy]: ");
        scanf("%d%d%d", &P[i].DOB.dd, &P[i].DOB.mm, &P[i].DOB.yy);
        
        printf("Enter Address : ");
        scanf("%s", P[i].address);
    }
    printf("\n\nDisplaying Results \n\n");
    for (int i = 0; i < 2; i++)
    {
        printf("Person %d\n\n", i + 1);
        printf("\nFirst Name : %s\nSurname : %s\nAge : %d\n\n", P[i].Firstname, P[i].Surname, 2025 - P[i].DOB.yy);
        if (P[0].DOB.yy < P[1].DOB.yy)
            printf("%s is older than %s\n", P[0].Surname, P[1].Surname);

        else if (P[0].DOB.yy > P[1].DOB.yy)
            printf("%s is older than %s\n", P[0].Surname, P[1].Surname);

        else if (P[0].DOB.yy == P[1].DOB.yy && P[0].DOB.mm < P[1].DOB.mm)
            printf("%s is older than %s\n", P[0].Surname, P[1].Surname);

        else if (P[0].DOB.yy == P[1].DOB.yy && P[0].DOB.mm > P[1].DOB.mm)
            printf("%s is older than %s\n", P[1].Surname, P[0].Surname);

        else if (P[0].DOB.yy == P[1].DOB.yy && P[0].DOB.mm == P[1].DOB.mm && P[0].DOB.dd < P[1].DOB.dd)
            printf("%s is older than %s\n", P[0].Surname, P[1].Surname);

        else if (P[0].DOB.yy == P[1].DOB.yy && P[0].DOB.mm == P[1].DOB.mm && P[0].DOB.dd > P[1].DOB.dd)
            printf("%s is older than %s\n", P[1].Surname, P[0].Surname);

        else if(P[0].DOB.yy == P[1].DOB.yy && P[0].DOB.mm == P[1].DOB.mm && P[0].DOB.dd == P[1].DOB.dd)
            printf("%s is of thesame age as  %s\n", P[0].Surname, P[1].Surname);
    }
    // printf("\nSizeof struct = %d\n",sizeof(person));
}