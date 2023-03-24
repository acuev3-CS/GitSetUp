#include <stdio.h>

struct Student{
    char firstName[10];
    char lastName[10];
    char major[15];
    int age;
    int UIN;
};


int main(){

    struct Student userInfo;

    printf("Enter first Name: ");
    scanf("%s", userInfo.firstName);

    printf("Enter last name: ");
    scanf("%s", userInfo.lastName);

    printf("Enter your major: ");
    scanf("%s", userInfo.major);

    printf("Enter your age: ");
    scanf("%d", &userInfo.age);

    printf("Student Info\n--------------------------\n");
    printf("Your first name is: %s\n", userInfo.firstName);
    printf("Your last name is: %s\n", userInfo.lastName);
    printf("Your major is: %s", userInfo.major);



}
