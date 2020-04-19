#include <iostream>

void doubleArray(int* values, int length);

int main(void){
    int length = 10;
    int array[length];
    int* arrayPtr = array;
    for(int i = 0; i < length; i++){
        array[i] = i * 3;
    }

    std::cout << "Before double:" << std::endl;
    for(int i = 0; i < length; i++){
        std::cout << "array[" << i << "] = " << array[i] << std::endl;
    }

    doubleArray(arrayPtr, length);

    std::cout << "\n \nAfter double:" << std::endl;
    for(int i = 0; i < length; i++){
        std::cout << "array[" << i << "] = " << array[i] << std::endl;
    }

}

//just have to create a pointer to the array and input it into the function, then it works the same as question 5
void doubleArray(int* values, int length){
     for(int i = 0; i < length; i++){
        values[i] = values[i] * 2;
    }
}