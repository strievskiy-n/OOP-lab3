#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
    cout << "Enter material part and immaterial part of your complex number; \nmaterial: ";
    double va;
    cin>>va;
    double k;
    cout<< "immaterial: ";
    cin>>k;
    Complex_number one(va, k);
    Complex_number two(2, 3);
    //cout<<one.value<<" "<<one.immaterial_part<<"\n";
    //one = two;
    //cout<<one.value<<" "<<one.immaterial_part<<"\n"<<two.value<<" "<<two.immaterial_part;
    //cout<<two.value<<" "<<two.immaterial_part<<"\n"<<&two.value<<" "<<&two.immaterial_part;
    Complex_number three(6, 5);
    //one = two + three;
    //Complex_number c= one + two;
    Complex_number a=two;//конструктор копирования
    cout<<a.value<<" "<<a.immaterial_part<<" "<<&a.value<<" "<<&a.immaterial_part<<endl;
    Complex_number p=one+two;
    cout<<p.value<<" "<<p.immaterial_part<<endl;
    three=p+one;
    cout<<three.value<<" "<<three.immaterial_part;
    return 0;
}
