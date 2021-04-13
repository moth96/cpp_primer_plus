#include <iostream>

const int hour_per_day = 24;
const int minute_per_hour = 60;
const int second_per_minute = 60;

int main()
{
    long l_second = 0L;
    int n_day = 0, n_hour = 0, n_minute = 0, n_second = 0;
    std::cout << "Enter the number of seconds: ";
    std::cin >> l_second;
    long l = l_second;
    n_day = l / hour_per_day / minute_per_hour / second_per_minute;
    l -= n_day * hour_per_day * minute_per_hour * second_per_minute;
    n_hour = l / minute_per_hour / second_per_minute;
    l -= n_hour * minute_per_hour * second_per_minute;
    n_minute = l / second_per_minute;
    l -= n_minute * second_per_minute;
    n_second = l;
    std::cout << l_second << " seconds = " << n_day << " days, " << n_hour << " hours, "
        << n_minute << " minutes, " << n_second << " seconds" << std::endl;
    return 0;
}
