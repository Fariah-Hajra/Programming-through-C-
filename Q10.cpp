#include <iostream>
using namespace std;

struct Product 
{
    char name[50];
    int productID;
    int quantity;  
};

void updateStock()

{
	
}




void newProduct(Product products[], int &n) 
{
    cout << "Enter product ID: ";
    cin >> products[n].productID;
    cout << "Enter product name: ";
    cin.ignore(); // to clear newline
    cin.getline(products[n].name, 100);
    cout << "Enter product quantity: ";
    cin >> products[n].quantity;
    n++;
}

void inventory(Product products[], int n)
{
    cout << "\nInventory:\n";
    for (int i = 0; i < n; i++) 
	{
        cout << "ID: " << products[i].productID;
		cout<< "\n Name: " << products[i].name ;
		cout << "\n Quantity: " << products[i].quantity << endl;
    }
}

int main() 
{
	cout<<"Fariah Hajra  F2460605037\n";
	cout<<"Task 09: Product Stock: \n\n";
    Product products[100];
    int n = 0;
    int choice;
	cout << "\n1. Add Product\n2. Display Inventory\n3. Exit\n";

    while (true) {
        cout<<"\nEnter choice: ";
        cin >> choice;
		
        if (choice == 1) 
		{
            newProduct(products, n);
        } else if (choice == 2)
		{
            inventory(products, n);
        } else if (choice == 3) 
		{
            break;
        } 
		else 
		{
            cout << "Invalid choice. Try again.\n";
        }
    }

    return 0;
}

