#include <stdio.h>

struct student_t {
    char id[8];
    char name[50];
    int age;
};

int main(void) {
    struct student_t student;
    printf("Enter your ID-number:");
    scanf("%s",student.id);
    printf("Enter your name:");
    scanf(" %[^\n]", student.name);
    printf("Enter your age:");
    scanf("%d", &student.age);
    printf("ID:%s\n",student.id);
    printf("Name:%s\n",student.name);
    printf("Age:%d\n",student.age);
    return 0;
}
