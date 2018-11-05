#include<iostream>
using namespace std;


int main()
{
// declare two variables a,b and a pointer variable p
int a, b, *p;
// Point p to a
p = &a;
// store the value pointed by p in b
b = *p;

// Print the values of a, b and *p
cout << a << "        "<< b << "        "<< *p << endl;

// Assign values a=2 and b = 3
a = 2;
b = 3;

// Print the values of a, b and *p
cout << a << "        "<< b << "        "<< *p << endl;

p = &b;

// Print the values of a, b and *p
cout << a << "        "<< b << "        "<< *p << endl;

return 0;
}
