#include<iostream>
using namespace std;


int main()
{
// array of size 10
char arr[] = "qwertyuio";

// index method
for(int i=0; i<10; i++)
{
cout << arr[i];
}
cout << endl;

// pointer method
char *p = &arr[0];
for(int i=0; i<10; i++)
{
cout << *p;
p++;
}
cout << endl;

// alternate pointer method
for(int i=0; i<10; i++)
{
char *p = &arr[i];
cout << *p;
}
cout << endl;


return 0;
}
