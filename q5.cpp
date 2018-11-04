#include<iostream>
using namespace std;

int main()
{
char s[10] = "abcde";
char* cptr;

cptr = s;
while(*cptr != s[9])	cptr++;

while(*cptr != s[0])
{
cptr--;
cout << *cptr;
}

cout << endl;

return 0;
}
