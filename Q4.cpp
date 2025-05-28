#include<iostream>
using namespace std;

int main()
{
	cout<<"Fariah Hajra  F24605037\n";
	 cout<<"Task 04: Compare two arrays using pointers: \n\n";
    int size;
    cout << "Enter the size of the arrays: ";
    cin >> size;

    int* arr1 = new int[size];
    int* arr2 = new int[size];

    cout << "Enter elements of the first array: ";
    for (int i = 0; i < size; i++) {
        cin >> *(arr1 + i);
    }

    cout << "Enter elements of the second array: ";
    for (int i = 0; i < size; i++) {
        cin >> *(arr2 + i);
    }

    cout << "Positions with unequal elements:" << endl;
    for (int i = 0; i < size; i++) {
        if (*(arr1 + i) != *(arr2 + i)) {
            cout << "At index " << i << ": " << *(arr1 + i) << " != " << *(arr2 + i) << endl;
        }
    }

    delete[] arr1;
    delete[] arr2;

    return 0;
}
