#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
    cout << "Enter material part and immaterial part of your complex number; material: ";
    double val;
    cin>>val;
    double val2;
    cout<< "immaterial: ";
    cin>>val2;
    Complex_number one(val, val2);
    Complex_number two(2, 3);
    Complex_number c= one + two;
    return 0;
}
