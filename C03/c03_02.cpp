#include <iostream>

const int inch_per_feet = 12;
const double meter_per_inch = 0.0254;
const double pound_per_kilogram = 2.2;

int main()
{
    int n_feet = 0;
    int n_inch = 0;
    double db_weight = 0.0; 
    std::cout << "Please enter your height: " << std::endl;
    std::cout << "Enter your height of feet part: _\b";
    std::cin >> n_feet;
    std::cout << "Enter your height of inch part: _\b";
    std::cin >> n_inch;
    std::cout << "Enter your weight in pounds: __\b\b";
    std::cin >> db_weight;
    double m_height = 0.0;
    m_height = (inch_per_feet * n_feet + n_inch) * meter_per_inch;
    double kg_weight = 0.0;
    kg_weight = pound_per_kilogram * db_weight;
    double bmi = 0.0;
    bmi = kg_weight / (m_height * m_height);
    std::cout << "height : " << m_height << " m" << std::endl;
    std::cout << "weight : " << kg_weight << " kg" << std::endl;
    std::cout << "BMI : " << bmi << std::endl;
    return 0;
}
