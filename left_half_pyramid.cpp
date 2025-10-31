#include <iostream>

int main(void)
{
    for (int i = 0; i < 7; i++)
    {
        for (int j = 0; j < 7 - i; j++)
            std::cout << "  ";
        for (int j = 0; j < i; j++)
            std::cout << "* ";
        std::cout << std::endl;
    }

    return (0);
}
