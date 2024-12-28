#include <iostream>

using namespace std;

// Section 4 Challenge:

    // Create a C++ program that asks the user for their favorite number between 1 and 100 then read this number from the console.

    // Suppose the user enters 24.

    // Then display the following to the console:
        // Amazing!! That's my faovrite number!
        // No really!!, 24 is my favorite number!101

    // Below are 2 sample runs of the program:
    //====================================================================================================

    // Enter your favorite number between 1 and 100: 24
    // Amazing!! That's my favorite number!
    // No really!!, 24 is my favorite number!



   
    int main() {
        int favorite_number;

        std::cout << "Enter your favorite number between 1 and 100: ";
        std::cin >> favorite_number;

        if(favorite_number > 100) {
            std::cout << "uhhhh...I don't know that number!" << std::endl;
        }else{
        std::cout << "Amazing!! that's my favorite number!" << std::endl;
        std::cout << "No really!!, " << favorite_number << " is my favorite number!" << std::endl;
        }

        
    
        return 0; 
    }