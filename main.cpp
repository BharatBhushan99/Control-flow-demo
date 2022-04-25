#include <iostream>
#include <vector>

int main()
{
    char choice {};

    std::vector<int> nums;

    do
    {
        std::cout << "\nP - Print numbers" << std::endl;
        std::cout << "A - Add a number" << std::endl;
        std::cout << "M - Display mean of the numbers" << std::endl;
        std::cout << "S - Display the smallest number" << std::endl;
        std::cout << "L - Display the largest number" << std::endl;
        std::cout << "Q - quit" << std::endl;
        
        std::cout << "\nEnter your choice: ";
        std::cin >> choice;

        if (choice == 'P' || choice == 'p')
        {
        	if (nums.size() > 0)
        	{
        		std::cout << "[ ";
        		for (int num: nums)
        		{
        			std::cout << num << " ";
        		}
        		std::cout << "]\n";

        	}
        	else
        	{
        		std::cout << "[] - the list is empty.\n";
        	}
        }
        else if(choice == 'A' || choice == 'a')
        {
        	int new_num {};
        	std::cout << "Enter an integer to add to the list: ";
        	std::cin >> new_num;
        	nums.push_back(new_num);
        	std::cout << new_num << " added.\n";
        }
        else if(choice == 'M' || choice == 'm')
        {
        	
        }
        else if(choice == 'S' || choice == 's')
        {
        	
        }
        else if(choice == 'L' || choice == 'l')
        {
        	
        }
        else if(choice == 'Q' || choice == 'q')
        {
        	std::cout << "Goodbye.\n";
        }
        else
        {
        	std::cout << "Unknown selection, please try again.\n";
        }


    }while(choice != 'Q' && choice != 'q');
    
    return 0;
}