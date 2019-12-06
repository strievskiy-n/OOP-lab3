#include <cstdlib>
#include <iostream>

#ifndef LIB
#define LIB


using namespace std;

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
    Complex_number operator+(int other);
    Complex_number operator+(double other);
    Complex_number operator-(Complex_number& other);
    Complex_number operator-(int other);
    Complex_number operator-(double other);
    void operator=(Complex_number other);
    bool operator !=(Complex_number& other);
    bool operator == (Complex_number& other);
    /*void print(Complex_number);
    void print_adress(Complex_number);*/
};

inline ostream& operator<<(ostream& out, Complex_number& p)
{
    out << p.value << "+" << p.immaterial_part << "i";

    return out;
}

#endif
