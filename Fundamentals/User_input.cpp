#include <iostream>
#include <string>
int main(){
    std::string name;
    int age;
    std::cout << "HI, What is your full name? ";
    std::cin >> name;
    
    std::cout << "How old are you? ";
    std::cin >> age;

    std::cout << "Hi, Your full name is " << name << std::endl<< "And you are " << age << " Years old";

    


    return 0;
}