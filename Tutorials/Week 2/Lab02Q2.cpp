#include <iostream>
#include <string>

int main(void){
    std::string name;
    std::cout << "Please enter your name: " << std::endl;
    getline(std::cin, name);
    int age;
    std::cout << "Please enter your age: " << std::endl;
    std::cin >> age;
    std::string DOB;
    std::cout << "Please enter your date of birth in DD/MM/YYYY format: " << std::endl;
    std::cin >> DOB;

    std::cout << "Your details are: \n Name: " << name << "\n Age: " << age << "\n DOB: " << DOB << std::endl;

    return EXIT_SUCCESS;
}