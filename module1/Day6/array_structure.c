#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student {
    int rollno;
    char name[20];
    float marks;
};

void parseString(const char* input, struct Student* students, int size) {
    char* token;
    char* context;
    int i = 0;

    token = strtok((char*)input, " ", &context);

    while (token != NULL && i < size) {
        students[i].rollno = atoi(token);

        token = strtok(NULL, " ", &context);
        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        students[i].name[sizeof(students[i].name) - 1] = '\0';

        token = strtok(NULL, " ", &context);
        students[i].marks = atof(token);

        token = strtok(NULL, " ", &context);
        i++;
    }
}

int main() {
    int size;
    char input[100];
    struct Student* students;

    printf("Enter the number of students: ");
    scanf("%d", &size);

    students = (struct Student*)malloc(size * sizeof(struct Student));

    getchar();
    printf("Enter the student details in the format 'rollno name marks':\n");
    fgets(input, sizeof(input), stdin);

    input[strcspn(input, "\n")] = '\0';

    parseString(input, students, size);

    printf("\nStudent details:\n");
    for (int i = 0; i < size; i++) {
        printf("Student %d:\n", i + 1);
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n", students[i].marks);
        printf("\n");
    }
    free(students);

    return 0;
}
