#include<stdio.h>
int main()
{
   /* char id[10];
    int hr;
    double s_amnt;
    printf("Employees ID : ");
    scanf("%s",&id);
    printf("Working hrs : ");
    scanf("%d",&hr);
    printf("Salary amount/hr : ");
    scanf("%lf",&s_amnt);
    double result = hr*s_amnt;
    printf("Employees ID : %s",id);
    printf("\nSalary = U$ %.2lf",result);
    return 0;*/
    char employeeID[10];
int workingHours = 8;
float salaryAmount = 15000;
float employeeSal;

printf("What is your Employee ID?\n");
scanf(" %s", employeeID);

employeeSal =((float)workingHours ) * salaryAmount;

printf("Employee ID is : %s and recieves a $%.2f salary.", employeeID, employeeSal);

return 0;
}
