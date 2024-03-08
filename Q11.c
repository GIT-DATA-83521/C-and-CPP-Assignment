#include <stdio.h>

struct Employee {
    char first_name[50];
    char last_name[50];
    double monthly_salary;
};

void set_salary(struct Employee* emp, double salary) {
    emp->monthly_salary = salary;
}

void emp_display(struct Employee* emp) {
    printf("Employee: %s %s\n", emp->first_name, emp->last_name);
    printf("Monthly Salary: $%.2lf\n", emp->monthly_salary);
}

int main() {
    struct Employee emp1 = {"John", "Doe", 5000};
    struct Employee emp2 = {"Jane", "Smith", 6000};

    printf("Initial Employee Details:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    set_salary(&emp1, emp1.monthly_salary * 1.10);
    set_salary(&emp2, emp2.monthly_salary * 1.10);

    printf("\nEmployee Details after 10%% Raise:\n");
    emp_display(&emp1);
    emp_display(&emp2);

    double yearly_salary1 = emp1.monthly_salary * 12;
    double yearly_salary2 = emp2.monthly_salary * 12;
    printf("\nYearly Salaries:\n");
    printf("%s %s: $%.2lf\n", emp1.first_name, emp1.last_name, yearly_salary1);
    printf("%s %s: $%.2lf\n", emp2.first_name, emp2.last_name, yearly_salary2);

    return 0;
}
