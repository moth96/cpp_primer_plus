#include <iostream>

void fun(int h, int m)
{
    std::cout << "Time: " << h << ":" << m << std::endl;
}

int main()
{
    int h = 0;
    int m = 0;
    std::cout << "Enter the number of hours: ";
    std::cin >> h;
    std::cout << "Enter the number of minutes: ";
    std::cin >> m;
    fun(h, m);
    return 0;
}
