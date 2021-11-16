#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct
{
    char name[10];
    int age;
    int degree;
    int section;
}Student;

void Print (Student[]);

int main()
{
    Student st[5];
   // Student 1

    strcpy(st[0].name,"Ahmed");
    st[0].age = 15;
    st[0].degree = 88;
    st[0].section = 2;

    // Student 2

     strcpy(st[1].name,"Sama");
    st[1].age = 15;
    st[1].degree = 90;
    st[1].section = 1;

    // Student 3

     strcpy(st[2].name,"Nada");
    st[2].age = 16;
    st[2].degree = 70;
    st[2].section = 3;

    // Student 4

     strcpy(st[3].name,"Norhan");
    st[3].age = 14;
    st[3].degree = 95;
    st[3].section = 1;

    // Student 5

     strcpy(st[4].name,"Mohamed");
    st[4].age = 16;
    st[4].degree = 99;
    st[4].section = 4;

    Print(st);
    return 0;
}
void Print (Student student[])
{
    for (int i = 0 ; i < 5 ; i++)
    {
        printf ("Student %i\n\n",i+1);
        printf ("Name\t: %s\n",student[i].name);
        printf ("Age\t: %i\n",student[i].age);
        printf ("Degree\t: %i\n",student[i].degree);
        printf ("Section\t: %i\n\n",student[i].section);
    }
}

