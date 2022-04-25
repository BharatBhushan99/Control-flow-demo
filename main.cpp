#include <iostream>

int main()
{
    char choice {};

    do
    {
        std::cout << "P - Print numbers" << std::endl;
        std::cout << "A - Add a number" << std::endl;
        std::cout << "M - Display mean of the numbers" << std::endl;
        std::cout << "S - Display the smallest number" << std::endl;
        std::cout << "L - Display the largest number" << std::endl;
        std::cout << "Q - quit" << std::endl;
        
        std::cout << "\nEnter your choice: ";
        std::cin >> choice;

    }while(choice )
    
    return 0;
}