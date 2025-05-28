#include <iostream>
using namespace std;

struct Employee {
    char name[100];
    int id;
    float salary;
};

void displayAboveThreshold(Employee employees[], int n, float threshold) {
    for (int i = 0; i < n; i++) {
        if (employees[i].salary > threshold) 
		{
			cout<<"Employee having more salary than threshold details:\n";
            cout << "\nID: " << employees[i].id ;
			cout<< " Name: " << employees[i].name ;
			cout<< " Salary: " << employees[i].salary << endl;
        }
    }
}

int main()
{
	cout<<"Fariah Hajra F24605037\n";
	cout<<"Task 07 :Details of all employees who earn a salary above a specified threshold\n\n";
    int n;
    float threshold;

    cout << "Enter number of employees: ";
    cin >> n;
    Employee employees[n];

    for (int i = 0; i < n; i++) {
        cout << "\nEnter name, ID, and salary for employee " << i + 1 << ": ";
        cin >> employees[i].name >> employees[i].id >> employees[i].salary;
    }

    cout << "Enter salary threshold: ";
    cin >> threshold;

    displayAboveThreshold(employees, n, threshold);

    return 0;
}