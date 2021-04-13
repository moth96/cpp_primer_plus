#include <iostream>

const int minute_per_degree = 60;
const int second_per_minute = 60;

int main()
{
    int n_degree = 0, n_minute = 0, n_second = 0;
    std::cout << "Enter a latitude in degrees, minutes, and seconds:" << std::endl;
    std::cout << "First, enter the degrees: __\b\b";
    std::cin >> n_degree;
    std::cout << "Next, enter the minutes:__\b\b";
    std::cin >> n_minute;
    std::cout << "Finally, enter the seconds:__\b\b";
    std::cin >> n_second;
    double db_la = 0.0;
    db_la = static_cast<double>(n_degree) + static_cast<double>(n_minute) / minute_per_degree + 
        static_cast<double>(n_second) / minute_per_degree / second_per_minute;
    std::cout << n_degree << " degrees, " << n_minute << " minutes, " << n_second << " seconds = "
        << db_la << " degrees" << std::endl;
    return 0;
}
