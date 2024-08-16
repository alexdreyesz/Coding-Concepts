#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define NAMESIZE 20
#define STUDENTAMOUNT 5

typedef struct Student {
    char *name;
    int age;
    float GPA;
} Student;

int main() {
    Student **students = (Student**)malloc(STUDENTAMOUNT * sizeof(Student*));

    char names[STUDENTAMOUNT][NAMESIZE] = {"Miguel Newvilage", "Mario Montana", "William Williams", "Rodrigo Caceres", "Sergio Gonzales"};

    for (int i = 0; i < STUDENTAMOUNT; i++) {
        students[i] = (Student*)malloc(sizeof(Student));

        int size = strlen(names[i]) + 1;
        students[i]->name = (char*)malloc(size * sizeof(char));
        strcpy(students[i]->name, names[i]);
        
        students[i]->age = rand() % 35;
        students[i]->GPA = rand() % 4;
    }

    for (int i = 0; i < STUDENTAMOUNT; i++) {
        printf("Name: %s \n", students[i]->name);
        printf("Age: %d\n", students[i]->age);
        printf("GPA: %.1f\n\n", students[i]->GPA);
    }

    // Free allocated memory
    for (int i = 0; i < STUDENTAMOUNT; i++) {
        free(students[i]->name);
        free(students[i]);
    }

    return 0;
}
