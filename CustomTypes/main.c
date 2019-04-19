#include <stdio.h>
#include <stdlib.h>

typedef struct Student
{
    int roll;
    char name[20];
    double gp;
} Student;

struct Test
{
    int t;
};

void inputStudent(Student *student)
{
    printf("Enter roll: ");
    scanf("%d", &student->roll);
    printf("Enter name: ");
    scanf(" %[^\n]", &student->name);
    printf("Enter gp: ");
    scanf("%f", &student->gp);
}

void printStudent(Student student)
{
    printf("Roll: %d, name: %s, grade: %.2f\n", student.roll, student.name, student.gp);
}

//create alias
typedef int integer;
typedef struct Test Test;

int main()
{
    /*
    integer count=0;
    Student student1;
    Student student2;
    Student student3;
    student1.roll=5;
    student2.roll=8;
    student3.roll=9;

    Test* t1;
    Test* t2;
    t1->t=10;
    */
    Student student;
    inputStudent(&student);
    printStudent(student);
    return 0;
}
