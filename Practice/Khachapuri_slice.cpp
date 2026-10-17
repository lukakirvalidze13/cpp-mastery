#include <iostream>
int main(){
    int a, b;
    std::cin >> a;
    if(a == 0) b = 1;
    else{
        b = a * 2;
    }
    std::cout << b;


    return 0;
}