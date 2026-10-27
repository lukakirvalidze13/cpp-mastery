#include <iostream>
#include <string>
namespace first{
    int x = 5;
}
namespace second{
    int x = 10;
}

int main(){
    using namespace second;
    std::cout << x;

    return 0;
}

/*
Namespaces are used to prevent a name conflict especially in larger projects, each entities need a different name. A namespace allows for identically named entities as long as namespaces are different.
*/