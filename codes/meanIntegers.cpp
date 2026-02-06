#include <iostream>
#include <cctype> // - for accessing static_cast<data type> operation used for converting different data types
int main()
{
    char choice{};
    do {
        double meanAverage{0};
        int numberOfQuizzes{0}, quizScores{0}, sumScore{0};
        std::cout << "\nEnter number of quizzes: ";
        std::cin >> numberOfQuizzes;

        for (int i = 0; i < numberOfQuizzes; i++) // - looping the number of times user inputted
        {
            std::cout << "Enter quiz score: ";
            std::cin >> quizScores;
            sumScore+=quizScores;   // - each quiz scores input get stored to the sumScore variable and gets added
                                    //      for each iteration storing a new sum
        }
        meanAverage=static_cast<double>(sumScore)/numberOfQuizzes;
       //meanAverage=sumScore/numberOfQuizzes; - alternative computation for data types that is double
        std::cout << "Mean score: " << meanAverage << std::endl;

        std::cout << "\nDo you want to repeat program(y/n)? ";
        std::cin >> choice;
    } while (toupper(choice)=='Y');
    return 0;
}