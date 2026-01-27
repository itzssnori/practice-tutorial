#include <iostream>

int main()
{
    char choice;
    do {
        float numQuiz = 0.0, quizScores = 0.0, sum = 0.0;
        std::cout << "\nInput the number of quizzes: ";
        std::cin >> numQuiz;
        for (int i = 1; i <= numQuiz; i++){
            std::cout << "Input the quiz score for quizzes " << i << ": ";
            std::cin >> quizScores;
                sum += quizScores;
            
        }  sum /= numQuiz;
        std::cout << "\nMean average is: " << sum;

        std::cout << "\nDo you want to repeat(Y/y)? ";
        std::cin >> choice; 
    } while(toupper(choice)=='Y');

    return 0;
}