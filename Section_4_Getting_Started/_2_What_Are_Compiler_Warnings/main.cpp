#include <iostream>

int main() {
    
    int favorite_number; //will give you a warning of not using favorite number
    
    favorite_number = 100;
    
	//std::cout << favorite_number << std::endl; //Throws warning that 'favorite_number' is uninitialized
    
    std::cout << favorite_number << std::endl; 

    std::cout << "What is your favorite number?";
    std::cin >> favorite_number; std::cout << " ";
    std::cout << "Your favorite number is " << favorite_number << std::endl;

	return 0;
    
    
}
