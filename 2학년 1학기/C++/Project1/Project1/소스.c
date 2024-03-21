#define CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct Student {
    int studentID;
    char name[50];
    int attendance;
};

int main() {
    struct Student students[60];

    for (int i = 0; i < 60; ++i) {
        students[i].studentID = i + 1;
        printf(students[i].name, "Student %d", i + 1);
        students[i].attendance = 0;
    }

    for (int i = 0; i < 10; ++i) {
        students[i].attendance = 1;
    }

    printf("%-15s%-20s%s\n", "학번", "이름", "출석 여부");
    for (int i = 0; i < 60; ++i) {
        printf("%-15d%-20s%s\n", students[i].studentID, students[i].name,
            students[i].attendance ? "출석" : "결석");
    }

    return 0;
}