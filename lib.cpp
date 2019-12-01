#include "lib.h"
#include <cstdlib>
#include <iostream>

Complex_number::Complex_number(double value, double immaterial_part)
{
    this->value=value;
    this->immaterial_part=immaterial_part;
}

Complex_number::~Complex_number(){}

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

Complex_number Complex_number::operator-(Complex_number& other)
{
    double value = this->value-other.value;
    double immaterial_part = this->immaterial_part-other.immaterial_part;
    return Complex_number(value, immaterial_part);
}
Complex_number Complex_number::operator-(int& other)
{
    double value = this->value-value;
    double immaterial_part = this->immaterial_part;
    return Complex_number(value, immaterial_part);
}
Complex_number Complex_number::operator-(double& other)
{
    double value = this->value-value;
    double immaterial_part = this->immaterial_part;
    return Complex_number(value, immaterial_part);
}
void Complex_number::operator=(Complex_number other)
{
    this->value = other.value;
    this->immaterial_part = other.immaterial_part;
}
bool Complex_number::operator !=(Complex_number& other)
{
    if (this->value!=other.value)
    {
        if(this->immaterial_part!=other.immaterial_part)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    else
    {
        return false;
    }
}
/*
void Complex_number::print(Complex_number)
{
    double j=this->value;
    double i=this->immaterial_part;
    cout<<j<<" "<<this->i<<endl;
}
void Complex_number::print_adress(Complex_number)
{
    cout<<*this->value<<" "<<*this->immaterial_part<<endl;
}
*/
