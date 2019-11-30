#include <cstdlib>
#include <iostream>

class Complex_number
{
public:
    double value;
    double immaterial_part;
    Complex_number(double value, double immaterial_part); //Конструктор создающий объект со значением true в поле immalerial_part
    ~Complex_number(); //деструктор
    copy(); // Копирование числа

    // Complex a, b, c;
    // c = a + b
    // c = a.operator+(b)
    // c = a + 5
    // c = a + 5.5
    Complex_number operator+(Complex_number& other);
    Complex_number operator+(int& other);
    Complex_number operator+(double& other);
    Complex_number operator=(double)
};

