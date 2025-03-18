#include<stdio.h>
struct emp {
	long int empno;
	char name[20];
	long int salary;
	char city[15];
};
int main() {
	struct emp e;
	printf("\nEnter employee number: ");
	scanf("%ld", &e.empno);  
	printf("\nEnter employee name: ");
	scanf("%s", e.name);      
	printf("\nEnter salary: ");
	scanf("%ld", &e.salary);  
	printf("\nEnter city: ");
	scanf("%s", e.city);      

	printf("\nThe employee details are: ");
	printf("\nEmployee number: %ld", e.empno);
	printf("\nEmployee name: %s", e.name);
	printf("\nSalary: %ld", e.salary);
	printf("\nCity: %s", e.city);

	return 0;
}
