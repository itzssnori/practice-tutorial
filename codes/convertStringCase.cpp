#include <iostream>
#include <cctype>
#include <string>

int main()
{
    char choice{};
    do {
        // Read a full word/line from input.
        std::string word{};
        std::cout << "\nInput a word: ";
        std::getline(std::cin >> std::ws, word);

        // Count uppercase vs lowercase characters in the input.
        int upperCount{0}, lowerCount{0};
        for (int i = 0; i < word.length(); i++)
        {
            if (std::isupper(word[i]))
            {
                upperCount++;
            }
            else if (std::islower(word[i]))
            {
                lowerCount++;
            }
        }

        // Convert the whole word to uppercase or lowercase depending on which count is higher.
        if (upperCount > lowerCount)
        {
            for (int i = 0; i < word.length(); i++)
            {
                word[i] = std::toupper(word[i]);
            }
        }
        else if (lowerCount > upperCount)   
        {
            for (int i = 0; i < word.length(); i++)
            {
                word[i] = std::tolower(word[i]);
            }
        }

        // Show result and ask whether to repeat.
        std::cout << "Result: " << word;
        std::cout << "\nRepeat(Y/N)? ";
        std::cin >> choice;
        
    } while(std::toupper(choice)=='Y');
    return 0;   
}