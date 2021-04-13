#include<iostream>

double fun(double x)
{
    return 63240 * x; 
}

int main()
{
    double x = 0.0;
    std::cout << "Enter the number of light year: ";
    std::cin >> x;
    std::cout << x << " light years = " << fun(x) << " astronomical units."<< std::endl;
    return 0;
}
