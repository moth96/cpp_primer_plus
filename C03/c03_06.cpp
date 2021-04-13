#include <iostream>

int main()
{
    double dis = 0;
    double oil = 0;
    std::cout << "distance(km):_\b";
    std::cin >> dis;
    std::cout << "oil(L):_\b";
    std::cin >> oil;
    std::cout << "oil(L) per 100km: " << oil / dis * 100 << std::endl;
    return 0;
}
