#include <iostream>
#include <cstring>
using namespace std;

int main()
{
	cout<<"Fariah Hajra  F24605037\n";
	cout<<"Task 02: Reversing string using pointers: \n\n";
    
	// Dynamically allocate memory for a character array
    char* text = new char[100];

    // Input a string from the user
    cout << "Enter a string: ";
    cin.getline(text , 100);

   // Ensure the string ends with a null terminator
    int length = 0;
    char* var = text;
    while (*var != '\0') 
	{
        length++;
         var++;
    }

    // string in reverse order using a for loop and pointer arithmetic
    cout << "Reversed text entered: ";
    for (char* end = text + length - 1; end >= text; --end) 
	{
        cout << *end;
    }
    cout << endl;

    // Free the allocated memory
    delete[] text;

    return 0;
}
