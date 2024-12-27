#include <iostream>

//Logic Errors:
// Logic errors are mistakes made by the programmer

// Suppose we have a program that determines if a person 
    //can vote in an election and you must be 18 years or older to vote.

int main() {

    int age;
    std::cout << "Enter your age: ";
    std::cin >> age;

    if (age > 18) { // The test condition should be greater than 17 or greater than or equal to 18
    std::cout <<"Yes, you can vote!";
    } else {
        std::cout << "No, you can't vote!";
}
    return 0;
}

// TEST YOUR CODE!!