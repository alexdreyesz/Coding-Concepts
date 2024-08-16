#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Student {
    char *name;
    int age;
    int GPA;
} Student;

int main () {

    Student *student = (Student*)malloc(sizeof(Student)); 

    char name[10] = "Rodrigo";

    int size = strlen(name) + 1;

    student->name = (char*)malloc(size * sizeof(char));
    strcpy(student->name, name);

    student->age = 20;
    student->GPA = 3.5;

    printf("Name: %s \n", student->name);
    printf("Age: %d \n", student->age);
    printf("GPA: %d \n", student->GPA); 
    
    return 0;
}