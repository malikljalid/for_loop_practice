#include <iostream>

int main(void)
{
    for (int i = 6; i > 0; i--)
    {
        for (int j = 0; j < 6 - i; j++)
            std::cout << " ";
        for (int j = 0; j < i; j++)
            std::cout << "* ";
        std::cout << std::endl;
    }

    return (0);
}
