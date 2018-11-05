#include<iostream>
#include<cstring>
using namespace std;


int main()
{
int arr[10] = {9,8,7,6,5,4,3,2,1,0};

// index method
for(int i=0; i<10; i++)
{
cout << arr[i];
}
cout << endl;

// pointer method
for(int i=0; i<10; i++)
{
int *p = &arr[i];
cout << *p;
}
cout << endl;



return 0;
}
