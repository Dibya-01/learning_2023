#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void initializeStudents(struct Student* students, int size) {
    for (int i = 0; i < size; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("Roll No: ");
        scanf("%d", &students[i].rollno);
        
        printf("Name:");
        scanf("%s",students[i].name);

        printf("Marks: ");
        scanf("%f", &students[i].marks);
        printf("\n");
    }
}

int main() {
    int size;
    struct Student* students;
    printf("Enter the number of students: ");
    scanf("%d", &size);

    students = (struct Student*)malloc(size * sizeof(struct Student));

    initializeStudents(students, size);

    printf("\nStudent details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
    }

    free(students);

    return 0;
}
