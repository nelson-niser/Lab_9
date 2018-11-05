#include<iostream>
using namespace std;


int main()
{

// Data types
short int a;
int b;
long int c;
double d;
float e;
bool f;
char g;


//pointers
short int *z = &a;
int *y = &b;
long int *x = &c;
double *w = &d;
float *v = &e;
bool *u = &f;
char *t = &g;


//printing sizes
cout << "Size of 'short int' data type is " << sizeof(a) << " and size of it's pointer is " << sizeof(z) << "." << endl;

cout << "Size of 'int' data type is " << sizeof(b) << " and size of it's pointer is " << sizeof(y) << "." << endl;

cout << "Size of 'long int' data type is " << sizeof(c) << " and size of it's pointer is " << sizeof(x) << "." << endl;

cout << "Size of 'double' data type is " << sizeof(d) << " and size of it's pointer is " << sizeof(w) << "." << endl;

cout << "Size of 'float' data type is " << sizeof(e) << " and size of it's pointer is " << sizeof(v) << "." << endl;

cout << "Size of 'bool' data type is " << sizeof(f) << " and size of it's pointer is " << sizeof(u) << "." << endl;

cout << "Size of 'char' data type is " << sizeof(g) << " and size of it's pointer is " << sizeof(t) << "." << endl;


return 0;
}
