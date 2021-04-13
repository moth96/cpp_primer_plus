#include <iostream>

const int inch_per_feet = 12;

int main()
{
    int n_inch = 0;
    std::cout << "Please enter your height in inches:___\b\b\b";
    std::cin >> n_inch;
    std::cout << "Your height is " << n_inch / inch_per_feet << 
        " feets and " << n_inch % inch_per_feet << " inches." << std::endl;
    return 0;
}
