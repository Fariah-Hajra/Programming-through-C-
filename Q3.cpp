#include<iostream>
using namespace std;

void swaping(int *ptrs, int *ptrt)
{
	int a;
		a = *ptrs + *ptrt;
		*ptrs = a - *ptrs;
		*ptrt = a - *ptrs;
}
int main()
{
	cout<<"Fariah Hajra  F24605037\n";
	cout<<"Task 04: Compare two arrays of equal size using pointers: \n\n";
	int s;
	cout<<"Enter the size for two arrays having same size: ";
	cin>>s ;
	swaping(&s , &t);
	
	cout<<"\nAfter Swaping: ";
	cout<<"\nFirst value entered after swaping is: "<<s;
	cout<<"\nSecond value entered becomes: "<<t;
	delete 
	return 0;	
}
