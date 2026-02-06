#include <iostream> 
#include <cstdlib> 
#include <chrono> 
#include <thread>
#include <ctime>

int main()
{
    srand(static_cast<unsigned int>(time(0)));
    int secretNumber {rand()%100 +1};
    int yourGuess{0}, numberOfTries{0};

    std::cout << "\n******* Number Guessing Game ********\n\n";
    std::cout << "How to play: Guess a number between 1-100\n";
    std::cout << "System picking a number...\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout << "System have successfully picked a number.\n";
    std::this_thread::sleep_for(std::chrono::seconds(1));

    std::cout << "Try to guess it!\n\n";
    do {
        std::cout << "Enter your guess: ";
        std::cin >> yourGuess;
        numberOfTries++;
            if (yourGuess > secretNumber) {
                std::cout << "\nYour guess is too high! Try a lower number.\n";
            }
            else if (yourGuess < secretNumber) {
                std::cout << "\nYour guess is too low! Try a higher number.\n";
            }
            else {
                std::cout << "\nCongratulations! You have successfully guessed the number "
                << secretNumber << "!\n";
                std::cout << "It took you " << numberOfTries << " tries!\n";
            }
    } while (yourGuess != secretNumber);

    return 0;
   
}