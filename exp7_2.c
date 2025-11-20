#include <stdio.h>
#define MAX 100
struct Employee {
    char name[50];
    float basicPay;
    float grossSalary;
};
void readEmployees(struct Employee emp[], int n);
void calculateGross(struct Employee emp[], int n);  
void displayEmployees(struct Employee emp[], int n);
int main() {
    struct Employee emp[MAX];
    int n;
    printf("Enter number of employees (up to 100): ");
    scanf("%d", &n);
    if (n > MAX || n <= 0) {
        printf("Invalid number of employees.\n");
        return 1;
    }
    readEmployees(emp, n);
    calculateGross(emp, n);
    displayEmployees(emp, n);
    return 0;
}
void readEmployees(struct Employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        printf("\nEnter details of employee %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", emp[i].name);
        printf("Basic Pay: ");
        scanf("%f", &emp[i].basicPay);
    }
}
void calculateGross(struct Employee emp[], int n) {
    for (int i = 0; i < n; i++) {
        float da = 0.52 * emp[i].basicPay;
        emp[i].grossSalary = emp[i].basicPay + da;
    }
}
void displayEmployees(struct Employee emp[], int n) {
    printf("\n------------------------------------------\n");
    printf("Employee Name\t\tGross Salary\n");
    printf("------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-16s\t%.2f\n", emp[i].name, emp[i].grossSalary);
    }
    printf("------------------------------------------\n");
}