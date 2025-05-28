#include<iostream>
using namespace std;

int main()
{
	cout<<"Fariah Hajra  F24605037\n";
	cout<<"Task 01: Dynamic allocation of 1D array: \n\n";
	int s;
	cout<<"Enter the number of values to be entered: ";
	cin>>s;
	int *data = new int[s];
	cout<<"Enter elements: ";
	for(int i = 0;i < s;i++)
	{
		cin>> *(data + i);
	}
	int sum = 0;
	for(int i = 0;i <s ;i++)
	{
		sum += *(data + i);
	}
	cout<<"Sum of elements entered: "<<sum;
	float avg  = static_cast<float>(sum) / s;
	cout<<"\nAverage of elements enetred: "<<avg;
	return 0;	
}
