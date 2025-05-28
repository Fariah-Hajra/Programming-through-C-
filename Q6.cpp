#include <iostream>
#include <cstring>
using namespace std;

struct Book {
    char title[100];
    char author[100];
    float price;
};

void findHighestPriceBook(Book books[], int n) {
    int maxIndex = 0;
    for (int i = 1; i < n; i++) {
        if (books[i].price > books[maxIndex].price) {
            maxIndex = i;
        }
    }
    cout << "\nBook with the highest price:\n";
    cout << "Title: " << books[maxIndex].title << endl;
    cout << "Author: " << books[maxIndex].author << endl;
    cout << "Price: " << books[maxIndex].price << endl;
}

int main() 
{
	cout<<"Fariah Hajra F24605037\n";
	cout<<"Task 06 :Details of the book with Highest Price\n\n";
    int n;
    cout << "Enter the number of books: ";
    cin >> n;

    Book books[n];
    cin.ignore();
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details for book " << i + 1 << ":\n";
        cout << "Enter title: ";
        cin.getline(books[i].title, 100);
        cout << "Enter author: ";
        cin.getline(books[i].author, 100);
        cout << "Enter price: ";
        cin >> books[i].price;
        cin.ignore();
    }

    findHighestPriceBook(books, n);
    return 0;
}