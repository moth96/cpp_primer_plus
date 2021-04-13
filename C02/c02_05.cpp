#include<iostream>

float fun(float x)
{
    return 1.8 * x + 32.0; 
}

int main()
{
    float x = 0.0;
    std::cout << "Please enter a Celsius value:";
    std::cin >> x;
    std::cout << x << " degrees Clesius is " << fun(x) << " degrees Fahrenheit."<< std::endl;
    return 0;
}
