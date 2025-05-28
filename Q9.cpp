#include <iostream>
using namespace std;

struct Product {
    int productID;
    char name[100];
    int quantity;
};

void addProduct(Product products[], int &n) {
    cout << "Enter product ID: ";
    cin >> products[n].productID;
    cout << "Enter product name: ";
    cin.ignore(); // to clear newline
    cin.getline(products[n].name, 100);
    cout << "Enter product quantity: ";
    cin >> products[n].quantity;
    n++;
}

void displayInventory(Product products[], int n) {
    cout << "\nInventory:\n";
    for (int i = 0; i < n; i++) {
        cout << "ID: " << products[i].productID << ", Name: " << products[i].name << ", Quantity: " << products[i].quantity << endl;
    }
}

int main() 
{
	cout<<"Fariah Hajra F24605037\n";
	cout<<"Task 09 :INventorys\n\n";
    Product products[100];
    int n = 0;
    int choice;

    while (true) {
        cout << "\n1. Add Product\n2. Display Inventory\n3. Exit\nEnter choice: ";
        cin >> choice;

        if (choice == 1) {
            addProduct(products, n);
        } else if (choice == 2) {
            displayInventory(products, n);
        } else if (choice == 3) {
            break;
        } else {
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}