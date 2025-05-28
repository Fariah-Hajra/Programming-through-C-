#include <iostream>
using namespace std;

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

int main() 
{
	cout<<"Fariah Hajra F24605037\n";
	cout<<"Task 05: Calculation through pointers\n";
    int choice, num1, num2;
    int (*operation)(int, int); // Function pointer declaration

    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    cout << "Choose an operation:\n";
    cout << "1. Add\n";
    cout << "2. Subtract\n";
    cout << "3. Multiply\n";
    cin >> choice;

    switch (choice) {
        case 1:
            operation = add;
            break;
        case 2:
            operation = subtract;
            break;
        case 3:
            operation = multiply;
            break;
        default:
            cout << "Invalid choice!" << endl;
            return 1;
    }

    cout << "Result: " << operation(num1, num2) << endl;

    return 0;
}