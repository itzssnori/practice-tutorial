#include <iostream>
#include <vector> 
#include <string>   

int main()
{
    char choice{};
    do{
        int listA{}, listB{};
        std::string output = "Output: ";    // string accumulation to concatenate program output and words
        std::cout << "\nInput the number of elements for list A: ";
        std::cin >> listA;

        std::vector<int> elementsA(listA);
        for (int i = 0; i < listA; i++)
        {
            std::cout << "Input element number " << i + 1 << ": ";
            std::cin >> elementsA[i];
        } 

        std::cout << "\nInput the number of elements for list B: ";
        std::cin >> listB;

        std::vector<int> elementsB(listB);
        for (int i = 0; i < listB; i++)
        {
            std::cout << "Input element number " << i + 1 << ": ";
            std::cin >> elementsB[i];
        } 
      
        for (int i = 0; i < listA; i++)     
        {
             bool hasCommon{true};       // switching boolean statement will switch the output of the program and what to display
            for (int j = 0; j < listB; j++) // for every iteration there is in listA; loop and check the condition of the program
            {
                if (elementsA[i] == elementsB[j])
                {
                    hasCommon = false;
                    break;  
                }
            }
            if (hasCommon) // remove all elements from listA that are also found in listB
            {
                output += std::to_string(elementsA[i]) + " "; // Convert the number to a string using std::to_string() and store it to variable output
            }
        }
        std::cout << output;    // displaying the result
        std::cout << "\n\nDo you want to repeat(y/n)? ";
        std::cin >> choice;
    } while (toupper(choice)=='Y');
    return 0;
}