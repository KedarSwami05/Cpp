//class Complex with rel,img part,function to set(constructor)
//function to print():normal method  imag j + real


#include<iostream>
using namespace std;

class Complex
{
private:
    float real,imag;
public:
    Complex()
    {
        real=0;imag=0;
    }
    Complex(float r,float i)
    {
        real=r;imag=i;
    }
   
    void print_data()
    {
        cout<<"\n"<<real<<"+"<<imag<<"i";
    }
    friend Complex operator+(Complex c1,Complex c2);
};
Complex operator+(Complex c1,Complex c2)
{
    Complex temp;
    temp.real=c1.real+c2.real;
    temp.imag=c1.imag+c2.imag;
    return temp;
}


int main()
{
Complex c1(5,2);
Complex c2(15,3);
Complex c3=c1+c2;
c3.print_data();

 
}
