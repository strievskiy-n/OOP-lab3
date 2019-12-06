#include <iostream>
#include "lib.h"

using namespace std;

int main()
{
    cout << "Enter material part and immaterial part of your first complex number; \nmaterial: ";
    double va;
    cin>>va;
    double k;
    cout<< "immaterial: ";
    cin>>k;
    cout << "Enter material part and immaterial part of your second complex number; \nmaterial: ";
    double a;
    cin>>a;
    double s;
    cout<< "immaterial: ";
    cin>>s;
    Complex_number one(va, k);
    Complex_number two(a, s);
    Complex_number d=(one - 4);
    cout<<"f!" << d<<endl;
    d=(one-4.4);
    cout<<"F" << d<<endl;
    int tr=10;
    while(tr != 0)
    {
        Complex_number result(0,0);
        cout<<"Print your numbers - 1"<< endl;
        cout<<"add your numbers - 2"<<endl;
        cout<<"subtract your numbers - 3"<<endl;
        cout<<"compare your numbers - 4"<<endl;
        cout<<"end - 0"<<endl;
        cin>>tr;
        if (tr==1)
        {
            cout<<one<<endl;
            cout<<two<<endl;
        }
        if (tr==2)
        {
            result=one+two;
            cout<<result<<endl;
        }
        if (tr==3)
        {
            int j=10;
            cout<<one<<" - "<<two<<" - 1"<< endl;
            cout<<two<<" - "<<one<<" - 2"<< endl;
            cin>>j;
            if (j==1)
            {
                result=one - two;
                cout<<result<<endl;
                j=10;
            }
            if (j==2)
            {
                result=two-one;
                cout<<result<<endl;
                j=10;
            }
        }
        if (tr==4)
        {
            if(one==two)
            {
                cout<<"numbers are the same"<<endl;
            }
            else
            {
                cout<<"numbers are not the same"<<endl;
            }
        }
    }

/*
    Complex_number one(va, k);
    Complex_number two(2, 3);
    Complex_number h=one-two;
    Complex_number l=one+two;

    cout<<h<<endl;
    cout<<l.value<<" "<<l.immaterial_part<<endl;
    //cout<<one.value<<" "<<one.immaterial_part<<"\n";
    //one = two;
    //cout<<one.value<<" "<<one.immaterial_part<<"\n"<<two.value<<" "<<two.immaterial_part;
    //cout<<two.value<<" "<<two.immaterial_part<<"\n"<<&two.value<<" "<<&two.immaterial_part;
    Complex_number three(6, 5);
    //one = two + three;
    //Complex_number c= one + two;
    /*Complex_number a=two;//конструктор копирования
    cout<<a.value<<" "<<a.immaterial_part<<" "<<&a.value<<" "<<&a.immaterial_part<<endl;
    Complex_number p=one+two;
    cout<<p.value<<" "<<p.immaterial_part<<endl;
    three=p-one;
    cout<<three.value<<" "<<three.immaterial_part;*/
    return 0;
}
