#include <iostream>
#include <string>
using namespace std;

// Function types
void login();
void showMenu();
void basicCalculations();
void unitConverter();
void zakatJizyaCalculator();
void timeConverter();
void exitProgram();

// Function for login
void login()
{
    string username, password;
    int attempts = 3;
    string correctUsername = "user";
    string correctPassword = "password";
    
    while (attempts > 0) {
        cout << "Enter Username: ";
        cin >> username;
        cout << "Enter Password: ";
        cin >> password;

        if (username == correctUsername && password == correctPassword) 
		{
            cout << "\nLogin successful!\n";
            break;
        } 
		else 
		{
            attempts--;
            cout << "\nIncorrect username or password. Attempts remaining: " << attempts << endl;
            if (attempts == 0) {
                cout << "Too many failed attempts. Exiting program.\n";
                exit(0);
            }
        }
    }
}

// Display menu options
void showMenu() {
    cout << "\n===== Super Calculator Menu =====\n";
    cout << "1. Basic Calculations \n";
    cout << "2. Unit Converter\n";
    cout << "3. Zakat & Jizya Calculator\n";
    cout << "4. Time Converter\n";
    cout << "5. Exit\n";
    cout << "Please select an option (1-5): ";
}

// Function to handle basic calculations (sum, difference, multiply, divide, average, percentage)
void basicCalculations() {
    double num1, num2, result;
    int choice;
    cout << "\n--- Basic Calculations ---\n";
    cout << "1. Sum\n";
    cout << "2. Subtraction\n";
    cout << "3. Multiply\n";
    cout << "4. Divide\n";
    cout << "5. Average\n";
    cout << "6. Percentage\n";
    cout << "Enter your choice (1-6): ";
    cin >> choice;
    if(cin.fail(choice)
		cout<<"Character is not allowed.";
		basicCalculations();
	}

    switch (choice) 
	{
        case 1:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 + num2;
            cout << "Sum: " << result << endl;
            break;
        case 2:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 - num2;
            cout << "Difference: " << result << endl;
            break;
        case 3:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = num1 * num2;
            cout << "Multiplication: " << result << endl;
            break;
        case 4:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            if (num2 != 0) {
                result = num1 / num2;
                cout << "Division: " << result << endl;
            } else {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        case 5:
            cout << "Enter two numbers: ";
            cin >> num1 >> num2;
            result = (num1 + num2) / 2;
            cout << "Average: " << result << endl;
            break;
        case 6:
            cout << "Enter the total value: ";
            cin >> num1;
            cout << "Enter the part value: ";
            cin >> num2;
            result = (num2 / num1) * 100;
            cout << "Percentage: " << result << "%" << endl;
            break;
        default:
            cout << "Invalid choice.\n";
    }
}

// Function to handle Unit Converter (Distance Only)
void unitConverter() {
    cout << "\n--- Unit Converter (Distance) ---\n";
    double value;
    int choice;
    cout << "1. Convert meters to kilometers\n";
    cout << "2. Convert kilometers to meters\n";
    cout << "Enter your choice (1-2): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter meters: ";
            cin >> value;
            cout << value << " meters = " << value / 1000 << " kilometers\n";
            break;
        case 2:
            cout << "Enter kilometers: ";
            cin >> value;
            cout << value << " kilometers = " << value * 1000 << " meters\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }
}

// Function to handle Zakat & Jizya Calculator
void zakatJizyaCalculator() {
    cout << "\n--- Zakat & Jizya Calculator ---\n";
    double zakat, jizya;
    
    // Assume fixed zakat and jizya rates for simplicity
    // Zakat = 2.5% of wealth, Jizya = fixed amount per person
    double wealth; // Wealth value
    cout << "Enter your wealth in USD: ";
    cin >> wealth;

    // Zakat calculation (2.5% of wealth)
    zakat = wealth * 0.025;
    cout << "Zakat due: " << zakat << " USD\n";

    // Jizya calculation (fixed rate, e.g., $10 per person in the household)
    cout << "Enter the number of people in your household: ";
    int people;
    cin >> people;
    jizya = 10 * people;  // Example Jizya rate, can be adjusted
    cout << "Jizya due: " << jizya << " USD\n";
}

// Function to handle Time Converter
void timeConverter() {
    cout << "\n--- Time Converter ---\n";
    int value, choice;
    
    cout << "1. Convert minutes to hours\n";
    cout << "2. Convert hours to days\n";
    cout << "3. Convert days to hours\n";
    cout << "4. Convert hours to minutes\n";
    cout << "Enter your choice (1-4): ";
    cin >> choice;

    switch (choice) {
        case 1:
            cout << "Enter minutes: ";
            cin >> value;
            cout << value << " minutes = " << value / 60 << " hours\n";
            break;
        case 2:
            cout << "Enter hours: ";
            cin >> value;
            cout << value << " hours = " << value / 24 << " days\n";
            break;
        case 3:
            cout << "Enter days: ";
            cin >> value;
            cout << value << " days = " << value * 24 << " hours\n";
            break;
        case 4:
            cout << "Enter hours: ";
            cin >> value;
            cout << value << " hours = " << value * 60 << " minutes\n";
            break;
        default:
            cout << "Invalid choice.\n";
    }
}

// Function to exit the program
void exitProgram() {
    cout << "Thank you for using the Super Calculator. Exiting...\n";
    exit(0);
}

// Main function
int main() {
    // Login process
    login();

    // Main loop to show the menu and execute functions
    while (true) {
        showMenu();

        int choice;
        cin >> choice;

        switch (choice) {
            case 1:
                basicCalculations();
                break;
            case 2:
                unitConverter();
                break;
            case 3:
                zakatJizyaCalculator();
                break;
            case 4:
                timeConverter();
                break;
            case 5:
                exitProgram();
                break;
            default:
                cout << "Invalid option. Please try again.\n";
        }
    }

    return 0;
}

