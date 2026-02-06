#include <iostream>
#include <string>

int main()
{
    std::string word{}, reversed{""};
    std::cout << "******* WORD PALINDROME *********\n";
    std::cout << "Enter a word to check: ";
      std::getline(std::cin >> std::ws, word);

      for (int i = word.length() - 1; i >= 0; i--)
      {
        reversed += word[i];
      }

      if (word == reversed)
      {
        std::cout << "The word " << word << " is a Palindrome.\n";
      }
      else {
        std::cout << "It is not a Palindrome.\n";
      }


    return 0;
}
