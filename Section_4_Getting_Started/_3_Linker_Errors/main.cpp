#include <iostream>;

// The linker is having trouble linking all the object files together to create an executable

// Usually there is a library or object file that is missing
extern int x;
int main() {
    
    
    std::cout << "Hello World!" << std::endl;

    std::cout << x; // throws an error 'undefined reference to `x'', because the linker can't find the definition of x

    return 0;
}
