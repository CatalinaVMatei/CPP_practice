#include <iostream>
#include <string>
#include <cmath>

bool isArmstrongNumber(int number)
{
    int originalNumber = number;
    int sum = 0;
    int numDigits = static_cast<int>(std::log10(number)) + 1;

    while (number > 0)
    {
        int digit = number % 10;
        sum += std::pow(digit, numDigits);
        number /= 10;
    }

    return sum == originalNumber;
}

void printIsArmstrong(int number)
{
    if (isArmstrongNumber(number))
    {
        std::cout << "Armstrong" << std::endl;
    }
    else
    {
        std::cout << "NOT Armstrong" << std::endl;
    }
}

int main(int argc, char* argv[])
{
    // Make sure there are some program arguments available.
    if (argc <= 1)
    {
        std::cout << "No program arguments found." << std::endl;
        return 1;
    }

    // Get the first argument and convert it to an integer
    std::string argumentAsString = argv[1];
    int readNumber = std::stoi(argumentAsString);

    printIsArmstrong(readNumber);
    return 0;
}
