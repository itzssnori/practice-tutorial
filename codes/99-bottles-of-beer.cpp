#include <iostream>

void bottlesBeer(int i)
{
    if (i > 0)
    {
     std::cout << '\n' << i << " bottles of beer on the wall,\n"
                << i << "  bottles of beer.\n"
                "Take one down, pass it around,\n"
                << i - 1 << (i - 1 == 1 ? " bottle " : " bottles ") << "of beer on the wall.\n";
    }
    else if (i == 1) {
            std::cout <<'\n' << i << " bottle of beer on the wall,\n"
                << i << " bottle of beer.\n"
                "Take one down, pass it around,\n"
                "No more bottles of beer on the wall.\n";
        }
}

int main()
{
    char choice{};
    do {
       for (int i = 99; i > 0; i--)
       {
        bottlesBeer(i);
       }
        std::cout << "\nNo more bottles of beer on the wall,\n"
                "No more bottles of beer.\n"
                "Go to the store and buy some more,\n"
                "99 bottles of beer on the wall. \n";

        std::cout << "\nRepeat 99 bottles of beer(y/n)? ";
        std::cin >> choice;
        } while (toupper(choice)=='Y');
    return 0;
}