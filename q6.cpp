#include<iostream>
using namespace std;

int countEven(int a[],int size)
{
int numEven = 0;

for(int i=0;i<size;i++)
	{
	if(a[i]%2==0)	numEven++;
	}
return numEven;

}

int main()
{
// no. of elements in the array
int n;
cout << "Enter the number of elements you want in the array: ";
cin >> n;
int arr[n];

// assigning elements in the defined array
for(int i=0;i<n;i++)
	{
	cout << "Element " << i+1 << ": ";
	int value;
	cin >> value;
	arr[i] = value;
	}

// display the array
for(int i=0;i<n;i++)
	{
	if(i==0)	cout << "{";
	cout << arr[i];
	if(i==n-1)	cout << "}";
	else	cout << ", ";
	}
cout << endl;

cout <<"Number of even numbers in the array: " << countEven(arr,n) << endl;

return 0;
}
