#include "Example.h"


Example::Example(double value) {
   this->ptrValue = new double(value);
}

/*
Missing destructor. Serious issue as if the value of an Example object is changed,
there could be a memory leak as the original value was not deleted.
*/

void Example::setValue(double value) {
   this->ptrValue = &value;
}


double Example::getValue() {
   return *this->ptrValue;
}