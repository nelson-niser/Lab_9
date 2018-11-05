#include<iostream>
using namespace std;


int main()
{
// string
char arr[] = "Nelson Kshetrimayum";

// index method
for(int i=0; i<19; i++)
{
cout << arr[i];
}
cout << endl;

// pointer method
char *p = &arr[0];
for(int i=0; i<19; i++)
{
cout << *p;
p++;
}
cout << endl;


return 0;
}
