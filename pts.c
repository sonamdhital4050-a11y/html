//pointer to structure
#include<stdio.h>
#include<string.h>
struct Employee
{
    int id;
    char name[50];
    float salary;
};
int main()
{
    struct Employee emp = {101, "John Doe", 50000.0};
    struct Employee *ptr = &emp;

    // Accessing structure members using pointer
    printf("Employee ID: %d\n", ptr->id);
    printf("Employee Name: %s\n", ptr->name);
    printf("Employee Salary: %.2f\n", ptr->salary);
    ptr->id = 102; // Modifying structure member using pointer
    strcpy(ptr->name, "Jane Smith"); // Modifying structure member using pointer
    ptr->salary = 60000.0; // Modifying structure member using pointer
    printf("\nUpdated Employee Details:\n");
    printf("Employee ID: %d\n", ptr->id);
    printf("Employee Name: %s\n", ptr->name);
    printf("Employee Salary: %.2f\n", ptr->salary);


    return 0;
}