#include <stdio.h>

int main() {
    char name[50];
    int units;

    printf("Enter student name: ");
    scanf("%s", name);

    printf("Enter number of registered units: ");
    scanf("%d", &units);

    char* status = (units > 7) ? "Overload - Approval Required" : "Registration Accepted";

    printf("\n--- Final Summary ---\n");
    printf("Student Name: %s\n", name);
    printf("Units: %d\n", units);
    printf("Status: %s\n", status);

    return 0;
}