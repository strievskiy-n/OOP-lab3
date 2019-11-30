#include <cstdlib>
#include <iostream>

class Complex_number
{
public:
    double value;
    double immaterial_part;
    Complex_number(double value, double immaterial_part); //����������� ��������� ������ �� ��������� true � ���� immalerial_part
    ~Complex_number(); //����������
    copy(); // ����������� �����

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

