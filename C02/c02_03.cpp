#include<iostream>

void func1()
{
    std::cout << "Three blind mice" << std::endl;
}

void func2()
{
    std::cout << "See how they run" << std::endl;
}

int main()
{
    func1();
    func1();
    func2();
    func2();
    return 0;
}
