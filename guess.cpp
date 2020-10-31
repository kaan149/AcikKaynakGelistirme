#include <iostream>

// This program tests whether you can guess the number that has already set.  
int main() {
    int set_number = 6; // constant number to guess
    int number_to_guess; // variable for user to answer
    
    std::cout << "Can you guess the number which is between 1-10? : ";
    std::cin >> number_to_guess;

    if (set_number == number_to_guess) {
        std::cout << "Congrats! You guessed the number correctly." << std::endl;
    }
    else {
        std::cout << "Unfortunately your answer is not correct. Try again." << std::endl;
    }
    return 0;
}

