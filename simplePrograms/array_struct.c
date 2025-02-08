#include <stdio.h>

struct Student
{
    char name[20];
    float gpa;
};

int main()
{
    struct Student stu1 = {"sujee", 3.4};
    struct Student stu2 = {"juth", 3.6};
    struct Student stu3 = {"pooch", 3.9};
    struct Student stu4 = {"paps", 3.7};

    struct Student studs[] = {stu1, stu2, stu3, stu4};

    for(int i = 0; i < sizeof(studs)/sizeof(studs[0]); i++)
    {
        printf("%-12s ", studs[i].name);
        printf("%.2f\n", studs[i].gpa);
    }

    return 0;
}
