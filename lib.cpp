#include "lib.h"

Complex_number::Complex_number(double value, double immaterial_part)
{
    this->value=value;
    this->immaterial_part;
}


Complex_number Complex_number::operator+(Complex_number& other)
{
    double value = this->value + other.value;
    double immaterial_part = this->immaterial_part + other.immaterial_part;

    return Complex_number(value, immaterial_part);
}
Complex_number Complex_number::operator+(int& other)
{
    double value = this->value + other;
    double immaterial_part = this->immaterial_part;

    return Complex_number(value, immaterial_part);
}
Complex_number Complex_number::operator+(double& other)
{
    double value = this->value + other;
    double immaterial_part = this->immaterial_part;

    return Complex_number(value, immaterial_part);
}

