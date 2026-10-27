#include <iostream>
int main(){
    int students = 50;
    int capacity = 250;
    int available = capacity - students;
    std::cout << "There're " <<students<<" students, still open for " <<available;

    

    return 0;
}