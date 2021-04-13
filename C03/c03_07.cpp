#include <iostream>

const double mile_per_km = 0.6214;
const double L_per_galu = 3.785;

int main()
{
    double eu = 0;
    double us = 0;
    std::cout << "oil(L) per 100km: ";
    std::cin >> eu;
    us = L_per_galu * mile_per_km * 100 / eu;
    std::cout << "US dis per oil: " << us << std::endl;
    return 0;
}
