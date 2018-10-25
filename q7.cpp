#include<iostream>
using namespace std;


double *maximum(double a[], int size)
{
if(size == 0)	return NULL;
else
{
	int x=0;
	double maxNum = a[x];
	for(int i=0;i<size;i++)
		{
		if(a[i]>maxNum)
			{
			x = i;
			maxNum = a[x];
			}
		}
	
	double *q = &a[x];

	return q;
	}
}

int main()
{
// no. of elements in the array
int n;
cout << "Enter the number of elements you want in the array: ";
cin >> n;
double A[n];

// assigning elements in the defined array
for(int i=0;i<n;i++)
	{
	cout << "Element " << i+1 << ": ";
	int value;
	cin >> value;
	A[i] = value;
	}

// display the array
for(int i=0;i<n;i++)
	{
	if(i==0)	cout << "{";
	cout << A[i];
	if(i==n-1)	cout << "}";
	else	cout << ", ";
	}
cout << endl;

// define a pointer for the array
double *p = A;

// call the function and display the result
double *y = maximum(p,n);
if(y==NULL)	cout << "The array is empty."<< endl;
else	cout << "The maximum value of the array: " << *y << endl;

return 0;
}
