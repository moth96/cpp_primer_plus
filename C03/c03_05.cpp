#include <iostream>

int main()
{
    long long us_pl = 0LL;
    long long gl_pl = 0LL;
    std::cout << "Enter the world's population: ";
    std::cin >> gl_pl;
    std::cout << "Enter the population of US: ";
    std::cin >> us_pl;
    std::cout << "The populaiton of the US is " << static_cast<double>(us_pl) / static_cast<double>(gl_pl) * 100
        << "% of the world population." << std::endl;
    return 0;
}
    
