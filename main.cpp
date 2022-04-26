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
        	if (nums.size() > 0)
        	{
        		double mean {};
        		int sum {0};

        		for (int num: nums)
        		{
        			sum += num;
        		}

        		mean = static_cast<double> (sum) / nums.size();
        		std::cout << "Mean: " << mean;
        	}
        	else
        	{
        		std::cout << "Unable to calculate mean, no data.\n";
        	}
        }
        else if(choice == 'S' || choice == 's')
        {

        	if (nums.size() > 0)
        	{
        		int smallest_num = nums.at(0);

        		for (int num: nums)
        		{
        			if (num < smallest_num)
        				smallest_num = num;
        		}

        		std::cout << "Smallest number: " << smallest_num << std::endl;
        	}
        	else
        	{
        		std::cout << "Unable to determine the smallest number, list is empty.\n";
        	}
        }
        else if(choice == 'L' || choice == 'l')
        {
        	if (nums.size() > 0)
        	{
        		int largest_num = nums.at(0);

        		for (int num: nums)
        		{
        			if (num > largest_num)
        				largest_num = num;
        		}

        		std::cout << "Largest number: " << largest_num << std::endl;
        	}
        	else
        	{
        		std::cout << "Unable to determine the largest number, list is empty.\n";
        	}
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