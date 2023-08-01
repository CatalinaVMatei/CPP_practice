#include <stdio.h>
#include <iostream>
#include <string>

void printOddOrEven(int number)
{
    if (number % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }
}

int main(int argc, char* argv[])
{
  
    if (argc <= 1)
    {
        printf("No program arguments found.\n");
    }
    else
    {
        // Get the first argument
        std::string argumentAsString = argv[1];
        // Use std::stoi to convert the string to an integer.
        try
        {
            int number = std::stoi(argumentAsString);
            printOddOrEven(number);
        }
        catch (std::invalid_argument const& e)
        {
            printf("Invalid input. Please provide a valid integer.\n");
        }
    }

    return 0;
}
