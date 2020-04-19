#include <iostream>

using std::cout;
using std::endl;

void foo(int x, double* y, char& z);

int main (void) {
   int i = 10;
   double d = 2.5;
   char c = 'e';

   int* iPtr = &i;
   double* dPtr = &d;
   cout << "iPtr = " << iPtr << ", dPtr = " << dPtr << endl;
   cout << "*iPtr = " << *iPtr << ", *dPtr = " << *dPtr << endl;

   *iPtr = 5;
   *dPtr = 4.25;
   cout << "*iPtr = " << *iPtr << ", *dPtr = " << *dPtr << endl;
   cout << "i = " << i << ", d = " << d << ", c = " << c << endl;

   foo(i, &d, c);
   cout << "i = " << i << ", d = " << d << ", c = " << c << endl;

   foo(*iPtr, dPtr, c);
   cout << "i = " << i << ", d = " << d << ", c = " << c << endl;

   return EXIT_SUCCESS;
}

void foo(int x, double* y, char& z) {
   x += 1;
   *y += 2;
   ++z; 
}



/* Problems:
   - ++c changed to ++z as it is z in the brackets
   - dtpr changed to *dtpr to change the value of d properly
   - iptr = address of i (&i) instead of NULL
   - d in foo function changed to &d as it needed a pointer/address
   - itpr in foo function changed to *itpr as it needed the value of an int
*/